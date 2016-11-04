#include <stdio.h>

int main(){

  int i=1;

  printf("\nwhile loop counting up\n\n");

  //while loop
  while(i<5){
    printf("%i\n",i);
    i++;
  }
  i--;
  printf("\nfor loop counting down\n\n");
  //for loop (i=10)
  // leave the first part blank because i is already instantiated
  for(; i!=0; i--){
    printf("%i\n",i);
  }

  return 0;
}
