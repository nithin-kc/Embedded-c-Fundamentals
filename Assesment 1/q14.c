#include <stdio.h>
int main(){
    int x, y;
    int a, b, c;
    printf("Enter Number : ");
    scanf("%d", &x);
    a = x / 100;         
    b = (x / 10) % 10;   
    c = x % 10;          
    y = (c * 100) + (b * 10) + a;
    printf("Result = %d", y);

    return 0;
}
