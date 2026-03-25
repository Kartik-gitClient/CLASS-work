#include <stdio.h>
#include <stdlib.h>

//LINKED LIST IMPLEMENTATION USING C WITH STRUCT.

struct node{
  int data;
  struct node *next;
};

struct node *first = NULL;



int main(){
  void create();
void insertFirst();
void traverse();
}

void create(){
int ch=0;
struct node *ptr , *cpt;
int data;
ptr=(struct node*)malloc(sizeof(struct node));
printf("Enter data for 1st NODE");
scanf("%d", &ptr->data);
first = ptr;

do{
  cpt = (struct node *)malloc(sizeof(struct node));
  printf("Enter data for next NODE");
  scanf("%d", &cpt->data);
  ptr->next=cpt;
  ptr=cpt;
  printf("\n PRESS 1 TO INSERT MORE NODE OTHERWISE PRESS ANY KEY");
  scanf("%d", &ch);
}
while(ch==1);
ptr->next=NULL;


}

void insertFirst(){
  struct node* ptr;
  ptr=first;
  printf("\n ELEMENTS OF LINKED LIST ARE \n");
  scanf("%d", &ptr->data);
  ptr->next=first;
  first=ptr;

}
void traverse(){
  struct node* ptr;
  ptr=first;
    while(ptr != NULL){
    printf("%d");
    
  }


}