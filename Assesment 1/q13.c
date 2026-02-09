#include <stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int r=(n%10)*10+(n/10);
    printf("Result : %d",r);
}
