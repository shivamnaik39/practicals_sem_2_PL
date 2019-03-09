#include <stdio.h>

int main() {

        int a,b;

        printf("\n\nEnter 2 numbers: " );
        scanf("%d %d", &a,&b);

        printf("\n\nBefore Swapping\na=%d\tb=%d",a,b );

        a=a+b, b=a-b, a=a-b;

        printf("\n\nAfter Swapping\na=%d\tb=%d",a,b );

        return 0;
}
