#include<stdio.h>
int oddNumbers(int x);
int main(){
    int a;
    printf("Write a number: ");
    scanf("%d",&a);
    oddNumbers(a);
}
int oddNumbers(int x){
    for (int i = 1; i <= 2*x; i++)
    {
        if (i%2!=0)
        {
            printf("%d\n",i);
        }
    }
}