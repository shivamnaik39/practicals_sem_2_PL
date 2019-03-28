// p18.Program to show sum of 10 elements of array & show the average.

#include <stdio.h>

int main(){

        int a[15],i,sum=0;
        float avg;

        printf("\nEnter the 10 elements into the array:\n" );

        for (i=0; i<10; i++) {
                scanf("%d",&a[i] );
                sum=sum+a[i];
        }

        avg=sum/10.0;

        printf("\nThe SUM of the elements is %d\n",sum );

        printf("\nThe average is %.2f\n",avg );


        return 0;
}

/*
OUTPUT:-
Enter the 10 elements into the array:
1 2 3 4 5 6 7 8 9 10

The SUM of the elements is 55

The average is 5.50

*/
