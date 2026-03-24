import java.util.Scanner;

class loop{
  public static void main(String args[]){
    int i=1;
    int res;
    Scanner input = new Scanner(System.in);
    System.out.println("ENTER THE NUMBER TO MAKE TABLE NIGGA.");
    int num = input.nextInt();

    // for(i=1 ; i<=10 ; i++){

    //   if(i==1){
    //     System.out.println( "-----------------------");
    //   }
    //   res=num*i;
    //   System.out.println( num + "*" + i + "=" + res);
    //   if(i==10){
    //     System.out.println( "-----------------------");
    //   }

    // }

    while(i<=10){
      if(i==1){
        System.out.println( "-----------------------");
      }
      System.out.println( num + " " + "*" + " " + i + " " + "=" + " "+ num * i);
      if(i==10){
        System.out.println( "-----------------------");
      }
    }
    




  }
}