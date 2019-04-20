// p27.Program to show call by reference.



#include <stdio.h>

void swap(int *a, int *b);

int main(){

        int a, b;

        printf("Swapping of Two numbers using call by Reference.\n\n" );

        printf("Enter Two numbers: " );
        scanf("%d%d",&a,&b );

        printf("\n\nBefore Swapping\n" );
        printf("a:%d \t b:%d",a,b );

        swap(&a,&b);

        printf("\n\nAfter Swapping\n" );
        printf("a:%d \t b:%d",a,b );

        return 0;
}

void swap(int *a, int *b){
        int temp;
        temp = *a;
        *a=*b;
        *b =temp;


}


/*
OUTPUT:-
Swapping of Two numbers using call by Reference.

Enter Two numbers: 5 9


Before Swapping
a:5 	 b:9

After Swapping
a:9 	 b:5



*/
