#include <stdio.h>
int main() {
    int n, r =0,d;
    scanf("%d",&n);
    if (n<0){
        n=-n;
    }
    while (n!=0) {
        d= n% 10;
        r=r*10+d;
        n= n/ 10;
    }
    printf("%d",r);
}
