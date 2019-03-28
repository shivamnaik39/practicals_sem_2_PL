// to insert an element in the array

#include <stdio.h>

int main(){

        int a[100],i,pos,elm,n;

        printf("Enter the size of the array: " );
        scanf("%d",&n );

//taking elements in array.

        printf("\nEnter the elements of the array:\n" );

        for(i=0; i<n; i++) {
                scanf("%d",&a[i] );
        }

//printing the array elements.
        printf("\nThe given array is:\n" );
        for (i=0; i<n; i++) {
                printf("%d |",a[i] );
        }

//Inserting an element into the array,
        printf("\n\nEnter the new element and its position: \n" );
        printf("NOTE:-Enter a position <= %d. Otherwise it'll exceed array size.\n\n",n );
        scanf("%d %d",&elm,&pos );

        for(i=n-1; i>=pos-1; i--) {

                a[i+1]=a[i];
        }

        a[pos-1]=elm;


        printf("\n\nThe resulting new array is:\n" );
        for (i=0; i<n+1; i++) {
                printf("%d |",a[i] );
        }







        return 0;
}
