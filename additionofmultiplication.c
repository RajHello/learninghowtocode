#include<stdio.h>
int main(){

    int num;
    int sum=0;
    printf("Enter The Number:");
    scanf("%d", &num);

    for(int i=1 ; i<11 ; i++){

        int mult= num  *  i;
        printf("%d X %d =%d\n", num ,i ,mult);

        sum+=mult;
        
        
    }
    printf("Total Of The Table Is:%d\n",sum);

    return 0;
}