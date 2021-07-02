#include <stdio.h>
#include <stdlib.h>

int main(){
  int i,num,total=0;
  
  printf("Rolling the dice...\n");
  
  for(i=0;i<2;i++){
    num=rand();
    printf("Die %d: %d\n",i+1,num);
    total=total+num;
  }
  
  printf("Total value: %d\n",total);

  return 0;
}
