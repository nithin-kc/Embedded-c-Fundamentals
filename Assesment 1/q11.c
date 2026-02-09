#include <stdio.h>

int main() {
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("Result : %d",( num / 10)%10);

    return 0;
}
