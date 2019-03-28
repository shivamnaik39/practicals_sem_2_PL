#include <stdio.h>

int squre(int n);


int main(){
        int num;

        printf("Enter a number: " );
        scanf("%d",&num );

        printf("\n\nThe squre of %d is %d.\n",num,squre(num) );



        return 0;
}

int squre(int n){

        return n*n;
}
