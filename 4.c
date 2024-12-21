#include<stdio.h>
int main(){
    int a , b , c;
    printf("enter 1st side: ");
    scanf("%d",&a);
    printf("enter 2nd side: ");
    scanf("%d",&b);
    printf("enter 3rd side:");
    scanf("%d",&c);
    if(a+b>c&&b+c>a&&c+a>b){
        printf("Triangle is valid.\n");
    }else{
        printf("Triangle is not valid.\n");
    }
    return 0;
}