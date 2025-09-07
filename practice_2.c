#include<stdio.h>

int main(){
    int maths,chemistry,physics;
    printf ("enter your score in maths:\n");
    scanf ("%d",&maths);
    printf ("enter your score in chemistry:\n ");
    scanf ("%d", &chemistry);
    printf ("enter your score in physics:\n");
    scanf ("%d",&physics);
    printf ("the marks are %d %d and %d", maths,chemistry,physics);
    if (maths<33 || chemistry<33 || physics<33)
    {
       printf("\n you afe failed to clear individual marks"); /* code */
    }
    else if ((maths+chemistry+physics)/3<40)
    {
        printf("\n you are failed"); /* code */
    }
    else
    {
       printf("\n you are passed"); /* code */
    }
    
    
    return 0 ;
}