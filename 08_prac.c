#include<stdio.h>

int main(){
    int n,p=1;
    int i=1;
     printf("ENTER YOUR NUMBER==>");
     scanf("%d",&n);
   while (i<=n)
   {
     p*=i;
     i++;
   }
   
   printf("Factorial of your number is %d",p);
    return 0 ;
}