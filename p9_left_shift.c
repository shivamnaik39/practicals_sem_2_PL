//p9.Program to shift inputed data by two bits to the left.

#include <stdio.h>

int main(){

        int n,m;

        printf("Enter a number:" );
        scanf("%d",&n );

        m=n<<2;

        printf("\nThe left shifted integer is %d",m );

        return 0;
}

/*
   OUTPUT:-
   Enter a number:39

   The left shifted integer is 156

 */
