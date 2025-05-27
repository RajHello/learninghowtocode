#include <stdio.h>
int main(){
    //our objective is to input 4 integers and then make the computer find the greatest one
    //i know no one is gonna open this XD
    int n1,n2,n3,n4;
   

    printf("Enter the First No:\n");
    scanf("%d", &n1);

    printf("Enter the Second No:\n");
    scanf("%d", &n2);

    printf("Enter the Third No:\n");
    scanf("%d", &n3);

    printf("Enter the Fourth No:\n");
    scanf("%d", &n4);

    printf ("Your Nos Are:%d,%d,%d,%d \n", n1,n2,n3,n4);

    if(n1>=n2 && n1>=n3 && n1>=n4){
    printf("Greatest number is:%d\n",n1);
    }

    else if(n2>=n1 && n2>=n3 && n2>=n4){
    printf("Greatest number is:%d\n",n2);
    }

    else if(n3>=n2 && n3>=n1 && n3>=n4){
    printf("Greatest number is:%d\n",n3);
    }

    else if(n4>=n2 && n4>=n3 && n4>=n1){
    printf("Greatest number is:%d\n",n4);
    }

    return 0;
}