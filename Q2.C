#include<stdio.h>
float simpleInterest(float,float,float);
int main(){
    float principle,rate,time;
    printf("Enter the Principle: ");
    scanf("%f",&principle);
    printf("Enter the rate: ");
    scanf("%f",&rate);
    printf("Enter the time: ");
    scanf("%f",&time);
    printf("the simple Interest is %f",simpleInterest(principle,rate,time));
    return 0;
}

float simpleInterest(float x,float y,float z){
    return (x*y*z)/100;
}