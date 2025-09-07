#include<stdio.h>

int main(){
    char grade;
    int marks = 65;

    printf("your mark :");
    scanf("%d",&marks);
    if(marks<=100 && marks>=90){
        grade='A';
    }
    else if (marks<=90 && marks>=80)
    {
        grade='B';/* code */
    }
    else if (marks<=80 && marks>=70)
    {
        grade='C';/* code */
    }
    else if (marks<=70 && marks>=60)
    {
        grade='D';/* code */
    }
    else if (marks<=60 && marks>=50)
    {
        grade='E';/* code */
    }
    else 
    {
        grade='F';/* code */
    }
    printf("marks %d \n",marks);
    printf("grade %c", grade);
    
    return 0 ;
}