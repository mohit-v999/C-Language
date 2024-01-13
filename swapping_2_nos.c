#include<stdio.h>
#include<math.h>
//swapping two numbers
int main(){
    int a,b;
    printf("enter the two number a and b=");
    scanf("%d" "%d",&a,&b);
    printf("before swapping a=%d,b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping a=%d,b=%d",a,b);
    return 0;
}