//p19.Program to find sum of two matrices.


#include <stdio.h>

int main(){

        int r,c,i,j;

        printf("Enter the number of rows and columns of 2 matrices: " );
        scanf("%d %d",&r,&c );

        int a[r][c],b[r][c],d[r][c];


        printf("\nEnter the elements of 1st matrix:\n" );
        for (i=0; i<r; i++) {
                for (j=0; j<c; j++) {

                        scanf("%d",&a[i][j] );
                }
        }

        printf("\nEnter the elements of 2nd matrix:\n" );
        for (i=0; i<r; i++) {
                for (j=0; j<c; j++) {

                        scanf("%d",&b[i][j] );
                }
        }

        printf("\n\nThe sum of two matrices is :\n" );

        for (i=0; i<r; i++) {
                for (j=0; j<c; j++) {

                        d[i][j]=a[i][j]+b[i][j];

                        printf("%d ",d[i][j] );
                }
                printf("\n" );
        }


        return 0;
}
