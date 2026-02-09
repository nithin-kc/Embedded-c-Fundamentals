#include <stdio.h>

int main() {
    int num,sum;
    printf("Enter the number : ");
    scanf("%d", &num);
    sum=(num/100)+(num/10)%10+(num%10);
    printf("Result :%d",sum);

    return 0;
}
