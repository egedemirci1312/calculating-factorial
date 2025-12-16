#include <stdio.h>
#include <stdlib.h>

int main()
{
int factorial;
int answer = 1;
printf("please give us a number...\n");
scanf("%d",&factorial);

int input = factorial;
while(factorial>=0){
    if(factorial==0){
        answer *= 1;
    }
    else{
      answer= answer*factorial;
    }
    factorial--;
}
printf("%d! = %d",input,answer);
    return 0;
}
