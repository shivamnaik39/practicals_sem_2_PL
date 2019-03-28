//p17.Program to add two number using pointer.

#include <stdio.h>

int main(){

        int a,b,sum,*p,*q;

        p=&a;
        q=&b;

        printf("Enter any 2 numbers: " );
        scanf("%d%d",p,q );

        sum=*p+*q;

        printf("\nThe sum of the numbers is %d \n",sum );




        return 0;
}

/*
   OUTPUT:-

   Enter any 2 numbers: 3 9

   The sum of the numbers is 12


 */
