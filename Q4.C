#include<stdio.h>
int naturalNumbers(int x);
int main(){
    int a;
    printf("Write a number: ");
    scanf("%d",&a);
    naturalNumbers(a);
}
int naturalNumbers(int x){
    for (int i = 1; i <= x; i++)
    {
        printf("%d\n",i);
    }
}
