#include<stdio.h>
#include<math.h>
// display person is adult or not
int main(){
    int x;
    printf("enter an age :");
    scanf("%d", &x);

    if(x>= 18){
        printf("person is adult \n");
    }
    else if(x>13 && x<18){
        printf("person is tennager\n");
    }
    else{
       printf("person is not adult\n");
    return 0;
    }
}