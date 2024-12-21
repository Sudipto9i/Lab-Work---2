#include<stdio.h>
int main(){
  float n;
    printf("enter a number:");
    scanf("%f",&n);
    if(n>0){
        printf("Positive Number.\n");
    }else if(n<0){
        printf("Negative Number.\n");
    }else {
        printf("Zero");
    }
return 0;
}