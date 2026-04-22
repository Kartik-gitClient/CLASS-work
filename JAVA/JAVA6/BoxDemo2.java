import java.util.Scanner;

class box{
  double height;
  double width;
  double depth;

  double setDim(double h , double w, double d){
    height=h;
    width=w;
    depth=d;
  }

  double volume(){
    return  height * width * depth;
  }
  double volDiff(double vol){
    //'THIS' - KEYWORD IS USED FOR INVOKING VOLUME () Fn.
    return this.volume() - vol;
  }
}

class BoxDemo{

  public static void main(String[] args){
    double height,width,depth, volume, Difference;
    box box1 = new box();
    box box2 = new box();//BOX NO. 2
    Scanner input = new Scanner(System.in);
    
    System.out.println("\nEnter the values of HEIGHT , WIDTH , DEPTH for 1ST box :-\n");
    System.out.println("HEIGHT:- \n");
    height = input.nextDouble();
    System.out.println("WIDTH:- \n");
    width = input.nextDouble();
    System.out.println("DEPTH:- \n");
    depth = input.nextDouble();

    // box1.height = height;
    // box1.width = width;
    // box1.depth = depth;
    //INSTEAD OF DOING THIS.. WE JUST USE THE SET VAL FN.

    //CALLING setDim( ) Fn 
    box1.setDim(height , width, depth);
    //NOW THE VALUES WILL BE STORED AND THE CODE WILL BE LESS REDUNDANT.

    System.out.println("\nEnter the values of HEIGHT , WIDTH , DEPTH for 2ND box :-\n");
    System.out.println("HEIGHT:- \n");
    height = input.nextDouble();
    System.out.println("WIDTH:- \n");
    width = input.nextDouble();
    System.out.println("DEPTH:- \n");
    depth = input.nextDouble();

    // box2.height = height;
    // box2.width = width;
    // box2.depth = depth;

    box2.setDim(height , width , depth);

    //CALCULATING VOLUME WITH THE BOX's VOLUME Fn.
    volume = box1.volume();
    System.out.println("VOLUME OF 1ST BOX :- \n" + volume);


    //REDUCING THE VALUE OF BOX1 BY BOX2 I.E.(BOX1 - BOX2)
    volume = box2.volume();
    System.out.println("VOLUME OF 2nd BOX :- \n" + volume);

    Difference= box1.volDiff(volume);//VOL2 GIVEN AS ARGUMENT
    System.out.println("Difference of volume :- " + Difference);

    

  }
}