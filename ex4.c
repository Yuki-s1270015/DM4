#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int i,num,total=0;
  
  srand((unsigned int)time(NULL));
  
  printf("Rolling the dice...\n");
  
  for(i=0;i<2;i++){
    num=1+rand()%6;
    printf("Die %d: %d\n",i+1,num);
    total=total+num;
  }
  
  printf("Total value: %d\n",total);

  //勝敗を決めるパート
  if(total>7) printf("You won!\n");
  else printf("You lost.\n");
  
  return 0;
}
