#include<stdio.h>

int main(){
    int n,prime=0;
   printf( "Enter your number:");
   scanf("%d",&n);
    for (int i = 2; i < n; i++)
    {
      if (n%1==0 && n!=2)
      {
       prime=1;
       break;
      }
      if (prime)
      {
        printf("%d is not prime\n",n);
      }
      else
      {
       printf("%d is prime\n",n); 
      }
      
    }
    
    return 0 ;
}