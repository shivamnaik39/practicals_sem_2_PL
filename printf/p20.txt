//p20.Program to find multiplication of two matrices.

#include <stdio.h>

int main(){

        int a[10][10],b[10][10],mul[10][10],i,j,k,sum=0,r1,c1,r2,c2;

        printf("Enter the number of rows and columns of the first matrix:\n" );
        scanf("%d%d",&r1,&c1 );

        printf("\nEnter %d elements into the matrix: \n",r1*c1 );

        for (i=0; i<r1; i++) {
                for(j=0; j<c1; j++) {
                        scanf("%d",&a[i][j] );
                }
        }

        printf("\nEnter the number of rows and columns of the second matrix:\n" );
        scanf("%d%d",&r2,&c2 );

        if (c1 != r2) {
                printf("\nmultiplication cannot be performed with these matrices!!\n" );
        }


        else{

                printf("\nEnter %d elements into the matrix: \n",r2*c2 );

                for (i=0; i<r2; i++) {
                        for(j=0; j<c2; j++) {
                                scanf("%d",&b[i][j] );
                        }
                }


                for(i=0; i<r1; i++) {
                        for (j=0; j<c2; j++) {



                                for (k=0; k<c1; k++) {

                                        sum += a[i][k]*b[k][j];
                                }

                                mul[i][j] = sum;

                                sum=0;



                        }
                }


                printf("\nThe multiplication of above matrices gives: \n" );

                for (i=0; i<r1; i++) {
                        for (j=0; j<c2; j++) {
                                printf("%d | ", mul[i][j] );
                        }
                        printf("\n" );
                }





        }




        return 0;
}

/*
OUTPUT:
Enter the number of rows and columns of the first matrix:
3 3

Enter 9 elements into the matrix:
1 2 3
4 5 6
7 8 9

Enter the number of rows and columns of the second matrix:
3 1

Enter 3 elements into the matrix:
1
2
3

The multiplication of above matrices gives:
14 |
32 |
50 |

*/
