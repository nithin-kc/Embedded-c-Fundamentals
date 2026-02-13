#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int c=n%100;
    int d=n/100;
    if(c==d){
        printf("Sucess");
    }
    else{
        printf("Failure");
    }
}
