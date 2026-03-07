#include <stdio.h>
#define Maxsize 5

int Stack[Maxsize];
int top=-1;
void push();
void pop();
void traverse();

int main (){
  push();
  push();
  push();
  push();
  traverse();
  pop();
  pop();
  traverse();
  pop();
  pop();

}

void push(){
  int data;
  if(top == Maxsize -1){
    printf("Stack overflow");
  }else{
    printf("Enter the  value to insert\n");
    scanf("%d", &data);
    top++;
    Stack[top]=data;
  }
}

void pop(){
  if(top == -1){
    printf("\nStack underflow or empty");
  }else{
    Stack[top]='\0';
    top--;
  }
}

void traverse(){
  int i=0;
  printf("\nAll Current Values of Stack are :-");
  for(i = top; i>=0 ; i--){
    printf("%d", Stack[i]);
    printf("\n");
  }
}