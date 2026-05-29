/* Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert this
temperature into Centigrade degrees. */
#include<stdio.h>
double FtoC(double F){
    double C;
    C = (5*F-160)/9;
    return C;
}
int main(){
    double f,c;
    printf("Enter the temperature in Fahrenheit : ");
    scanf("%lf",&f);
    c = FtoC(f);
    printf("The Temperature in Centigrade is : %.2lf",c);
    return 0;
}