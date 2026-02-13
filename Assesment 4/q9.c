#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    if(n<0){
        n=-n;
    }
    if(n==0){
        int c=1;
    }
else{
    for (;n!=0;n=n/10){
        count++;
    }
}
printf("%d",count);
}
