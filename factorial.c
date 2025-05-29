#include <stdio.h>
int main(){

    //we'll try to find factorial of a given number
    //i know no one will read this but a factorial is denoted by '!'
    //so 5!=5 x 4 x 3 x 2 x 1
    //only works till factorial of 13 btw
    int num;

    printf("Enter Desired Number:");
    scanf("%d", &num );

    int factorial=1;
    for(int i=1;i<=num;i++){

        factorial *=i;
    }
    printf("factorial is:%d",factorial);


    return 0;
}