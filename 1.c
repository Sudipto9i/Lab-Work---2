#include<stdio.h>
int main(){
    int a , b ;
    printf("enter first team point:");
    scanf("%d",&a);
    printf("enter second team point:");
    scanf("%d",&b);
    if (a>b){
        printf("Team a in rank 1st.\n");
    }else if (b>a){
        printf("Team b in rank 1st.\n");
    }else {
        printf("Both team in same rank");
    } 
 return 0  ; 
}