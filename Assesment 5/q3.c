#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int max=(a>b)?a:b;
    max=(max<b)?max:b;
    while(1){
        if(max%a==0&&max%b==0&&max%c==0){
            printf("%d",max);
            break;
        }
        max++;
    }


    
}
