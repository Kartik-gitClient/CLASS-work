import java.util.Scanner;

public class hello {
  public static void main(String[] args) {
    Scanner scanner= new Scanner(System.in);
    System.out.println("hello nigaa");
    int age = 18;
    System.out.println("Enter THE Day: ");
    int day = scanner.nextInt();
    if(age <= 18){
      System.out.println("You are a minor niggaaa");
    }else{
      System.out.println("YOU AREE A NIGGGAAA");
    }
    switch (day){
      default:
      System.out.println("inVALID NIGGAA!!");
      break;
      case 1:
      System.out.println("MONDAYY!");
      break;
      case 2:
      System.out.println("TUESDAY!");
      break;
      case 3:
      System.out.println("WEDNESDAY!");
      break;
      case 4:
      System.out.println("THRUSDAY!");
      break;
      case 5:
      System.out.println("FRIDAY!");
      break;
      case 6:
      System.out.println("SATURDAY!");
      break;
      case 7:
      System.out.println("SUNDAY!");
      break;
      
    }
    scanner.close();
  }
}