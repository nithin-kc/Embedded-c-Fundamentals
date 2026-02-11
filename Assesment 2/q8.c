#include<stdio.h>
int main(){
    int x,y;
    scanf("%d",&x);
   int a=x/10;
   int b=x%10;
   if(a<b  || a==b){
       printf("1");
   }
   else {
       printf("0");
   }
}
