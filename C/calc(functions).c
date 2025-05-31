#include <stdio.h>

//so made this program to learn functions,
int sum(int , int); //function prototype
int mult(int , int);
float div(float, float);


int sum (int x, int y){
    printf("Sum Of Values Is:%d \n",x+y);
    return x+y;
}

int mult (int x, int y){
    printf("Product Of Values Is:%d\n",x*y);
    return x*y;
}

float div (float x,float y){

    if(y!=0){
        printf("Division Of Values Is:%.2f\n",x/y);
        
        return x/y;
    }
    else{
        printf("Division By 0 aint Allowed Cuh:\n");
        return 0;
    
    }
}

int main(){
    int op;
    
    printf("1=addition,2=multiplication,3=division\n ");

    printf("Which Operation You Wanna Perform:\n");
    
    scanf("%d",&op);

    if(op==1){
        int a,b;
        printf("Enter Value Of First Number:\n ");
        scanf("%d",&a);

         printf("Enter Value Of Second Number:\n ");
        scanf("%d",&b);

        sum(a,b);
    }
    
    else if(op==2){

         int a,b;
        printf("Enter Value Of First Number:\n ");
        scanf("%d",&a);

         printf("Enter Value Of Second Number:\n ");
        scanf("%d",&b);

        mult(a,b);

    }

    else if(op==3){

         float a,b;
        printf("Enter Value Of First Number:\n ");
        scanf("%f",&a);

         printf("Enter Value Of Second Number:\n ");
        scanf("%f",&b);

        div(a,b);
    }
    else{
        printf("Sorry invalid Operation");
    }
    return 0;
}