#include <stdio.h>
#define maxsize 100

int main(){
  int i,index, size=0;
  int item;
  int arr[maxsize];

  printf("\nEnter the size of array\n");
  scanf("%d", &size);
  printf("\nEnter %d elements\n", size);
  for(i=0;i<size;i++){
    scanf("%d", &arr[i]);
  }

  printf("\nElements of array are :-\n");
  for(i=0;i<size;i++){
    printf("%d", arr[i]);
  }

  printf("\nEnter value which you want to insert:-\n");
  scanf("%d",&item);
  printf("\nEnter the index where you want to insert !: \n");
  scanf("%d",&index);
  for(i=size;i>=index;i--){
    arr[i+1]=arr[i];
  }
  arr[index]=item;
  size++;

  printf("\nElements of array are :-\n");
  for(i=0;i<size;i++){
    printf("%d", arr[i]);
  }

  printf("\nEnter index of element you want to delete\n");
  scanf("%d", &index);

  for(i=index;i<=size;i++){
    arr[i]=arr[i+1];
  }
  size--;

   printf("\nElements of array are :-\n");
  for(i=0;i<size;i++){
    printf("%d", arr[i]);
    printf("\n");
  }
}