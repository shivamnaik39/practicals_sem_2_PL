#include <stdio.h>

int factorial(int n);

int main(){

        int num;

        printf("Enter a number: " );
        scanf("%d",&num );

        printf("%d! = %d\n\n",num,factorial(num) );

        return 0;
}

int factorial(int n){

        if (n==1) {
                return 1;
        }

        else{
                return n*factorial(n-1);
        }
}
