#include<stdio.h>
int main(){

    // we gotta find multiplication(pahade)of the number we enter :D
    //bachpan me har koi ye puch kar mood off kardeta tha
    //to the people who asked me tables when i was a kid....im coming for yyou

    int num;
    printf("Enter Number :\n");
    scanf("%d",&num);

    int i;
    for(i=1;i<11;i++){

        int a= i*num;
        printf("%d times %d =%d\n", num ,i,a);
        
    }

    return 0;
}