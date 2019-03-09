#include <stdio.h>

int main() {

        float r,area,circumference;

        printf("\n\nEnter the radius of the circle: " );
        scanf("%f",&r );

        area=3.142*r*r;
        circumference=2*3.142*r;

        printf("\n\nThe area of the circle is %.2f squre units.", area );

        printf("\n\nThe circumference of the circle is %.2f units.\n", circumference );



        return 0;

}
