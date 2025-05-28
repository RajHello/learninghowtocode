#include <stdio.h>
int main(){

      // made this as im learning loops
    //ended up thinking of making a karma farming sim

    char god[20];

    printf("Bhagwaan Ka Naam Likho:\n");
    scanf("%s", god);

    int a;
    printf("Kitne Jhap Karne Hai?:\n");
    scanf("%d",&a);
    
    int b = 0;

    while (b<a){
        printf("%s Bhagwaan Ki JAY!!!\n",god);
        b++;
    }



    return 0;
}

    

   
   
   
   
