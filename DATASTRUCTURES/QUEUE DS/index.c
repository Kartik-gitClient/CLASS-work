#include <stdio.h>
#define Maxsize 5
void insert();
void delet();
void display();
int queue[Maxsize];
int front=-1;
int Rear=-1;

int main(){
  insert();
  insert();
  insert();
  insert();
  insert();
  insert();
  display();
  delet();
  delet();
  display();
  delet();
  delet();
  delet();
  delet();

  return 0;

}

void insert(){
  int data;
  if(Rear == Maxsize - 1){
    printf("\n Queue OVERFLOW");
  }
  else{
    if(Rear == -1){
      front=0;
      Rear=0;
    }else{
      Rear++;
    }
    printf("\n Enter a value to insert");
    scanf("%d", &data);
    queue[Rear] = data;
  }

}

void delet(){
  if(front == -1){
    printf("Queue UNDERFLOW !");
  }
  else{
    {
    if(front == Rear){
      queue[front]='\0';
      front=-1;
      Rear=-1;
    }
    else{
      queue[front]='\0';
      front++;
    }
  }
}
}

void display(){
  printf("\n Elements of Queue are ");

  for( int i=front ; i<=Rear ; i++){
    printf("%d", queue[i]);
  }

 
}
