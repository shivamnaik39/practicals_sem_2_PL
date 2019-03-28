// addition of two strings.

//has bugs

#include <stdio.h>

int main(){

        char a[50],b[50],c[100];
        int i,j;

        printf("Enter a string: " );
        gets(a);

        printf("Enter another string: " );
        gets(b);


        for (i=0; a[i] != '\0'; i++) {
                c[i] = a[i];
        }

        for (j=0; b[j] != '\0'; j++,i++) {

                c[i]=b[j];

        }


        printf("The combined string is:\n" );

        puts(c);


        return 0;
}
