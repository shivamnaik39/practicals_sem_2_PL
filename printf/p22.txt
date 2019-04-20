//p22.Program to find the maximum number in array using pointer.
#include <stdio.h>

int main(){

        int a[100], i,max, *p,n;

        printf("Enter the size of the array: " );
        scanf("%d",&n );

        printf("\nEnter ONLY %d elements in array\n", n );
        for (i=0; i<n; i++) {
                scanf("%d",&a[i] );
        }

        //len = sizeof(a)/sizeof(int);
        p = a;
        max = *p;

        for (i=0; i<n; i++) {
                if(*p > max ) {
                        max = *p;
                }

                p+=1;
        }


        printf("\n\nThe largest number in array is %d",max );


        return 0;
}

/*
   OUTPUT:-
   Enter the size of the array: 5

   Enter ONLY 5 elements in array
   9 5 155 0 -9


   The largest number in array is 155


 */
