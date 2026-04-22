import java.util.Scanner;


//Calculating factorials

class factorial {
  int fact(int n){
    if(n==1){
      return 1;
    }
    return n*fact(n-1);
  }
}
class recursion{

  public static void main(String[] args){
    factorial f = new factorial();
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    System.out.println(f.fact(n));
  }
}