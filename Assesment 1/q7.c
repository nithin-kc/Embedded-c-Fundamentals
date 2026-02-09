#include<stdio.h>
int main(){
    int a;
    printf("Enter the numbers :");
    scanf("%d",&a);
    while(a>=10){
    a=a/10;
    }
    printf("Result : %d",a);
}
