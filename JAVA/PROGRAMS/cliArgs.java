import java.util.Scanner;

class cliArgs{
  public static void main(String args[]){
    double sum = 0.0;
    for(String i : args){
      sum = sum + Double.parseDouble(i);
      // System.out.println("args" + args);
      System.out.println("i : " + i);

    }
    System.out.println("Sum :"+ sum);
    
    }
}