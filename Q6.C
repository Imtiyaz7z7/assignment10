#include<stdio.h>
int factorial(int x);
int main(){
    int a;
    printf("Write a number: ");
    scanf("%d",&a);
    printf("%d",factorial(a));
}

int factorial(int x){
    int a = 1;
    for (int i = x; i >= 1; i--)
    {
        a = a*i;
    }
    return a;
}