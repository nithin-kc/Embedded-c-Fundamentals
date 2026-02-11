#include<stdio.h>
int main(){
    int x,y;
    scanf("%d",&x);
   int a=x/100;
   int b=x%100;
   if(a==b){
       printf("1");
   }
   else {
       printf("0");
   }
}
