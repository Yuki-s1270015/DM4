#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int i,num,total=0;
  
  srand((unsigned int)time(NULL));
  
  //名前を聞くパート
  char str[8];
  printf("What is your name?");
  scanf("%s", str);
  printf("Hello, %s!\n",str);
  
  //サイコロを振るパート
  printf("Rolling the dice...\n");
  
  for(i=0;i<2;i++){
    num=1+rand()%6;
    printf("Die %d: %d\n",i+1,num);
    total=total+num;
  }
  
  printf("Total value: %d\n",total);

  //勝敗を決めるパート
  if(total>7) printf("%s won!\n",str);
  else printf("%s lost.\n",str);
  
  return 0;
}
