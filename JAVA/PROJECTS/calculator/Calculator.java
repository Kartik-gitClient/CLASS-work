import java.util.Scanner;

public class Calculator {
  public static void main(String[] args){
    Scanner input = new Scanner(System.in);
    int a, b;
    char operation;
    System.out.println("Hii this is a calculator");
    System.out.println("Enter A: ");
    a = input.nextInt();
    System.out.println("Enter Operation(+,-,*,/):");
    operation = input.next().charAt(0);
    System.out.println("Enter B: ");
    b = input.nextInt();
    
    double c =  b/a;
     switch (operation){
      case '+':
      System.out.println("SUM IS :");
      System.out.println(a+b);import
      break;
      case '-':
      System.out.println("Difference IS :" );
      System.out.println(a-b);
      break;
      case '*':
      System.out.println("MULTIPLICATION IS :"+ a*b );
      System.out.println(a*b);
      break;
      case '/':
      System.out.println("DIVISION IS:");
      System.out.println(c);
      break;
      default:
      System.out.println("inVALID NIGGAA!!");
      break;
      
    }
    input.close();


  }
}