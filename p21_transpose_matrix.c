//p21.Program to find transpose of a matrix.
#include <stdio.h>

int main(){

        int a[10][10], t[10][10], i, j,r,c;

        printf("Enter the number of rows and columns of the matrix: " );
        scanf("%d%d",&r,&c );

        printf("\n\nEnter the elements into the matrix:\n" );

        for(i=0; i<r; i++) {
                for(j=0; j<c; j++) {
                        scanf("%d",&a[i][j] );
                }
        }

        printf("\n\nThe Orignal matrix is:\n" );
        for(i=0; i<r; i++) {
                for(j=0; j<c; j++) {
                        printf("%d | ",a[i][j] );
                }
                printf("\n" );
        }

        for(i=0; i<r; i++) {
                for(j=0; j<c; j++) {
                        t[j][i] = a[i][j];
                }
        }

        printf("\n\nThe Transpose of the matrix is:\n" );
        for(i=0; i<c; i++) {
                for(j=0; j<r; j++) {
                        printf("%d | ",t[i][j] );
                }
                printf("\n" );
        }


        return 0;
}

/*
OUTPUT:-
Enter the number of rows and columns of the matrix: 4 3


Enter the elements into the matrix:
1 2 3
4 5 6
7 8 9
3 6 1


The Orignal matrix is:
1 | 2 | 3 |
4 | 5 | 6 |
7 | 8 | 9 |
3 | 6 | 1 |


The Transpose of the matrix is:
1 | 4 | 7 | 3 |
2 | 5 | 8 | 6 |
3 | 6 | 9 | 1 |



*/
