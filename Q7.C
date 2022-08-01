#include<stdio.h>
int factorial(int x);
int main(){
    int a,b,c;
    printf("Write the number of items: ");
    scanf("%d",&a);
    printf("Write combinations: ");
    scanf("%d",&b);
    c = a-b;
    int d = factorial(a)/(factorial(b)*factorial(c));
    printf("total number of combinations are %d",d);
}

int factorial(int x){
    int a = 1;
    for (int i = x; i >= 1; i--)
    {
        a = a*i;
    }
    return a;
}
