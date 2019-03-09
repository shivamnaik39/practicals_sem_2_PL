#include <stdio.h>

int main() {

        float m1,m2,m3,m4,m5,sum,percentage;

        printf("\n\nEnter your marks in 5 subjects: " );
        scanf("%f %f %f %f %f",&m1, &m2,&m3, &m4, &m5 );

        sum=m1+m2+m3+m4+m5;
        percentage=(sum/500)*100;

        printf("\n\nThe total marks are %.2f and the percentage is %.2f%\n\n",sum,percentage );

        return 0;
}
