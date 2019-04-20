//p7.Program to show the use of conditional operator.

#include <stdio.h>

//This is a simple program to check if given number is EVEN or ODD using CONDITIONAL OPERATOR.

int main(){

        int n;

        printf("Enter ta number:" );
        scanf("%d",&n );

        (n%2==0) ? printf("\n%d is an EVEN number.\n",n ) : printf("\n%d is a ODD number.\n",n );

        return 0;
}

/*
   OUTPUT:-
   Enter ta number:39

   39 is a ODD number.

   Enter ta number:64

   64 is an EVEN number.

 */
