#include<stdio.h>

int main(){
    int n,y,w,d;
    printf("enter number  of days(n) :");
    scanf("%d",&n);
    y=n/365;
    w=(n%365)/7;
    d=(n%365)%7;
    printf("Years :%d\nWeeks :%d\nDays :%d",y,w,d);
    return 0;
}