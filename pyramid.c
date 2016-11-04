#include <stdio.h>

int main(){

  //attributes
  int height=0, spaces=0, hash=1, acc=0;

  //prompt user for size
  printf("Lets Make a Pyramid. Enter size [3-100]: ");
  scanf("%d", &height);

  while(height > 100 || height < 3){
    printf("Please Enter Size between [3-100]: ");
    scanf("%d", &height);
  }

  //update variables
  spaces = height - 1;
  printf("\n");

  while(acc < height){
    for(int i=0; i<spaces; i++){
       printf(".");
    }
    for(int j=0; j<hash; j++){
       printf("#");
    }
    spaces--;
    hash++;
    acc++;
    printf("\n");
  }
  
  return 0;
}
