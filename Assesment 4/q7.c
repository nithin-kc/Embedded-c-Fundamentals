#include<stdio.h>
int main(){
    int n,d1,d2;
    for(int i=10;i<=99;i++){
        if(i%2!=0){
            d1=i/10;
            d2=i%10;
            int sum=d1+d2;
            if(sum==7){
                printf("%d\n",i);
            }
        }
}
}
