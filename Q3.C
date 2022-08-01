#include<stdio.h>
int evenOdd(int x);
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("%d",evenOdd(a));
    return 0;
}

int evenOdd(int x){
    if (x%2==0)
    {
        return 1;
    }else{
        return 0;
    }
    
}