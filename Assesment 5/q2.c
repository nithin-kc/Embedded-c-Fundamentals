#include<stdio.h>
int main(){
    int n1,n2,dup;
    scanf("%d%d",&n1,&n2);
    while(n2!=0){
        dup=n2;
        n2=n1%n2;
        n1=dup;
    }
    printf("HCF = %d",n1);
}
