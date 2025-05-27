#include <stdio.h>
int main(){

    // Reuleaux Triangle is a wierd triangle with circular arcs instead of straight lines :D
    //its formula is A=1/2(pi-root3)r^2

    float radius;

    printf("Enter Value Of Radius :\n");
    scanf("%f", &radius);

    float area=0.5*(3.14-1.7)*radius*radius;
    //could've calculated all constants before but i wanted to make it more chaotic on purpose :)

    printf("The Area Of The Reuleaux Triangle is:%.2f", area);

    return 0;

}