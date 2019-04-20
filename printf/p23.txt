//p23.Program to reverse a number using pointer.

#include <stdio.h>

int main(){

        int num, revnum=0, *p,*r;

        p = &num;
        r= &revnum;

        printf("\nEnter a number: " );
        scanf("%d",p );

        while(*p != 0) {
                *r = *r*10 + *p%10;
                *p= (*p)/10;
        }

        printf("The reversed number is %d ",revnum );


        return 0;
}

/*
OUTPUT:-
Enter a number: 5896
The reversed number is 6985

*/
