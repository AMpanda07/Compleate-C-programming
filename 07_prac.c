#include<stdio.h>

int main(){
    int n,p=1;
     printf("ENTER YOUR NUMBER==>");
     scanf("%d",&n);
   for (int i = 1; i <=n; i++)
   {
      p*=i;
   }
   printf("Factorial of your number is %d",p);
    return 0 ;
}