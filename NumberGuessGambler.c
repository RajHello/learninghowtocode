#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //you have to guess the number
    //if its higher it says its higher
    //else it just says guess lower
    //also shows in how many tries you guessed\

    
    int guess;
    int guesses = 0;
    int tukka;

    srand (time(0));
    int randomnum = (rand() % 100) +1;

    printf("Guess Karo:\n");
    scanf ("%d", &guess);

    do{
        if(guess > randomnum){
            printf("Thoda Niche Feko \n");
        }
        else if(guess < randomnum){
            printf("Thoda Upar Feko \n");
        }
        else{
            printf("Sahi Tukka Mara hai \n");
        }
        guesses++;
        if(guess != randomnum){
            ("Enter Other Tukka:");
            scanf("%d" ,&guess);
        }

       }while(guess != randomnum);

       printf("Total Tries Taken %d", guesses);

    return 0;
}