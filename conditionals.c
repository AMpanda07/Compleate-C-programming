#include<stdio.h>
int main(){
    int age;
    printf("enter your age\n");
    scanf("%d",&age);
    if(age>10){
        printf("we are inside if \n");
        printf ("age is greater then 10\n");
    }
    if(age%5==0){
        printf("we are inside if \n");
        printf ("age is divisible by 5\n");
    }
    return 0 ;
}