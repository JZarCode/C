#include <stdio.h>

int main(){

  int i;
  printf("Enter positive integer: ");
  scanf("%i", &i);

  if(i==1){
    printf("i is equal to 1.\n");
  } else if(i==2){
    printf("i is equal to 2.\n");
  } else {
    printf("i is greater than 2.\n");
  }
  

  //exit code (0 seen as success)
  return 0;
}
