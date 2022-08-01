#include<stdio.h>
float area(float x);
int main(){
    float rad,a;
    printf("Enter the radius of circle");
    scanf("%f",&rad);
    printf("the area of circle is %f",area(rad));
    return 0;
}

float area(float x){
    return 3.14*x*x;
}