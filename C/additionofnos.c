#include <stdio.h>
int main(){

    // we are gonna add numbs
    int num;
sd
    printf("Enter The Number Jidhar Tak Add Karna hai:\n");
    scanf("%d",&num);
    int sum=0;
    int i=1;


    while(i<=num){
        sum +=i;
        i++;
    }

    printf("sum of your desired value is %d",sum);



    return 0;
}