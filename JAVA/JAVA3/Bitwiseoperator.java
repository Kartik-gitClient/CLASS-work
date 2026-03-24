class Bitwiseoperator {
  
  public static void main (String args[]){
    int a = 45;
    int b = 30;
    int aNot = ~a;
    System.out.println("A :- " + a + " aNot:- " + aNot);
    int c =  a&b;
    int d =  a|b;
    int e =  a^b;
    System.out.println("A & B :" + c);
    System.out.println("A | B :" + d);
    System.out.println("A ^ B :" + e);

  }
}