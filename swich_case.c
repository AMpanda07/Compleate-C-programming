#include<stdio.h>

int main(){
    int a;
    printf("enter a: \n");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
          printf("entered 1 \n");
          break;
    case 2:
          printf("entered 2 \n");
          break;
    case 3:
          printf("entered 3 \n");
          break;
    case 4:
          printf("entered 4 \n");
          break; 
    default:
         printf("none");                      
    }
    return 0 ;
}