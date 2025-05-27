#include <stdio.h>
int main(){
    //so in this we will find out how much we owe to her majesty nirmala sitaraman mam
    //the tax slabs im using arent meant to be accurate
    //so yea ignore the weird tax rates :D

    int salary; 
    
    printf("Enter Pagar:\n");
    scanf("%d", &salary);

    if(salary<250000){
        printf("Too poor to tax sorry boss\n");
    }

    else if(salary>=250000 && salary<=500000){
        float a=salary*0.05;
        printf(" 5 percent of your sweat is worth: %.2f\n", a);
    }

    else if(salary>500000 && salary<=1000000){
        float a=salary*0.15;
        printf(" 15 percent of your sweat is worth: %.2f\n", a);
    }

    else if(salary>1000000 && salary<=3000000){
        float a=salary*0.30;
        printf(" 30 percent of your sweat is worth: %.2f\n", a);
    }

    else if(salary>3000000){
        float a=salary*0.45;
        printf(" 45 percent of your sweat is worth(me na sehta): %.2f\n", a);
    }
    
    return 0;
}