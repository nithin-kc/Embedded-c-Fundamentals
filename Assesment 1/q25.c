#include<stdio.h>
int main(){
    int n;
    printf("Enter the numbers : ");
    scanf("%d",&n);
    int result =(n/100)*100+(n%10);
    printf("%d",result);
    return 0;
}
