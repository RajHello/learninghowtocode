#include <stdio.h>
int main(){
    //to know if the character entered is capital or small :D

    char word;
    
    printf("Enter the desired word:");
    scanf("%c", &word);

    if(word>=97 && word<=122){

        printf("chota case hai\n");
    }

    else{
        printf("bada case hai\n");
    }
    return 0;

    

    
}