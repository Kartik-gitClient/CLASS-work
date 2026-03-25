import java.util.Scanner;

class box{
  double height;
  double width;
  double depth;

  double volume(){
    return  height * width * depth;
  }
}

class classDemo{

  public static void main(String[] args){
    double height,width,depth, volume; 
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

    volume = box1.volume();
    System.out.println("VOLUME :- \n" + volume);




  }
}