#include<stdio.h>
int main(){
    int n;
    printf("enter days of a month:");
    scanf("%d",&n);
    if(n==30){
        printf("April,june,September,November month contains 31 days.\n");
    }else if (n==28){
        printf("February month cntains 28 days.\n ");
    }else if (n==31){
        printf("January,March,May,July,August,October,December month contains 31 days.\n");
    }else{
        printf("The number you enter isn't a valid month days.");
    }
 return 0;   
}