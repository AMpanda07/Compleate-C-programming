#include<stdio.h>

int main(){
    for (int i = 0; i < 15; i++)
    {
        if (i==10)
        {
          continue;
        }
        
        printf("i is %d\n",i);
    }
    printf("for loop");
    
    return 0 ;
}