//p16.Program to use bitwise AND operator between the two integers.

#include <stdio.h>

int main(){

        int n,m,p;

        printf("Enter any 2  number:" );
        scanf("%d%d",&n,&m );

        p=n&m;

        printf("\nThe bitwise AND result of above 2 integers is %d.\n",p );

        return 0;
}

/*
   OUTPUT:-
   Enter any 2  number:99 39

   The bitwise AND result of above 2 integers is 35.

 */
