#include<stdio.h>
int main(){
    int n,sum;
    printf("Enter the number : ");
    scanf("%d",&n);
    int a=n%10;
    int b=n/10;
    sum=a+b;
    printf("%d",sum);
}
