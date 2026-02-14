#include<stdio.h>
int main(){
    int n,dup=0;
    scanf("%d",&n);
    if(n<=1){
        printf("Not a PrimeNumner");
    }
    else{
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
        dup=1;
        break;
    }
    }
    if(dup==0){
        printf("Prime Number");
    }
    else{
        printf("Not a PrimeNumber");
    }
}
