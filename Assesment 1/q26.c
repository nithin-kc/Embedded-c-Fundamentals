#include<stdio.h>
int main(){
    int f,l,n;
    scanf("%d",&n);
    f=n/100;
    l=n%100;
    int r=(l%10)*10+(l/10);
    int result=f*100+r;
    printf("%d",result);
}



