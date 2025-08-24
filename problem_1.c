#include<stdio.h>

int main(){
    // Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit).
   float c,f;
   printf("Enter temperature in Celsius:\n ");
   scanf("%f",&c);
   f= (9 * c / 5) + 32;
   printf("Temperature in Fahrenheit: %f",f);

    return 0 ;
}