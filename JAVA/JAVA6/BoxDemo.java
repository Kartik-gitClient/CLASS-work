import java.util.Scanner;

class box{
  double height;
  double width;
  double depth;

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
    double vol2=1500.00;
    double height,width,depth, volume, Difference;
    box box1 = new box();
    Scanner input = new Scanner(System.in);
    
    System.out.println("\nEnter the values of HEIGHT , WIDTH , DEPTH\n");
    System.out.println("HEIGHT:- \n");
    height = input.nextDouble();
    System.out.println("WIDTH:- \n");
    width = input.nextDouble();
    System.out.println("DEPTH:- \n");
    depth = input.nextDouble();

    box1.height = height;
    box1.width = width;
    box1.depth = depth;

    //CALCULATING VOLUME WITH THE BOX's VOLUME Fn.
    volume = box1.volume();
    System.out.println("VOLUME :- \n" + volume);

    //REDUCING THE VALUE BY A SMALLER VOLUME vol2 = 800.00;
    Difference= box1.volDiff(vol2);//VOL2 GIVEN AS ARGUMENT
    System.out.println("Difference of volume :- " + Difference);

    

  }
}