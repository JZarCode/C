#include <stdio.h>

int main(){

  int i;
  printf("Enter a small postive integer: ");
  scanf("%i",&i);

  switch(i){
  case 0:
    printf("you entered 0.\n");
    break;
  case 1:
    printf("you entered 1.\n");
    break;
  case 2:
    printf("you entered 2.\n");
    break;
  default:
    printf("greater than 2, this is default case.\n");
    break;
  }

  //exit status (0 = successful)
  return 0;
}
