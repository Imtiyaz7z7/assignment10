#include<stdio.h>
int factorial(int x);
int main(){
    int a,b,c;
    printf("Write the number of items n: ");
    scanf("%d",&a);
    printf("Write value of r: ");
    scanf("%d",&b);
    int d = factorial(a)/(factorial(b));
    printf("total number of ARANGEMENTS are %d",d);
}

int factorial(int x){
    int a = 1;
    for (int i = x; i >= 1; i--)
    {
        a = a*i;
    }
    return a;
}