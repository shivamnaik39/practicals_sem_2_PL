#include <stdio.h>

int  main() {

        float c,f;

        printf("\n\nEnter the temperature in degree centigrade: " );
        scanf("%f",&c );

        f=(9*c/5)+32;

        printf("\n\nThe temperature in Fahrenheit is %.2f. \n",f );

        return 0;
}
