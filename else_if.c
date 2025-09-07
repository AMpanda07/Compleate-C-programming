#include<stdio.h>

int main(){
    int age;
    printf("enter your age : \n");
    scanf("%d",&age);
     
    if (age>60)
    {
        printf("you can drive and you are a senior citizen"); /* code */
    }
    else if (age>45)
    {
        printf("you can drive and you are elder");
    }
    
    
    else if (age>18)
    {
        printf("you can drive \n");  /* code */
    }
    else
    {
        printf("you can not drive"); /* code */
    }
    return 0 ;
}