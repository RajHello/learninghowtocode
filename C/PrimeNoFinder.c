#include <stdio.h>
int main(){
    //we gotta find if the entered number is a prime number or not
    //if you're a 3rd grader reading this then a prime number is a number which drinks prime :D

    int p;
    int i;
    int prime=0;
    printf("Enter Desired Number:\n");
    scanf("%d", &p);

    for(i=2 ; i<p ; i++){

        if(p%i==0){
            prime=1;
        }
    }

    if(prime){
        
        printf("%d is not Prime :D\n", p);
    }
    else{

        printf("%d Is Prime :/ \n", p);
    }

 
    return 0;
}