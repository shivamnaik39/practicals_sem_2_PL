#include <stdio.h>

int main() {

        int a,b,c;

        printf("\n\nEnter 3 numbers: " );
        scanf("%d %d %d",&a,&b,&c);

        if (a>b || a>c) {
                printf("\n\n%d is the greatest of the 3 numbers.\n",a );
        }

        else if (b>c) {
                printf("\n\n%d is the greatest of the 3 numbers.\n",b );
        }

        else{
                printf("\n\n%d is the greatest of the 3 numbers.\n",c );
        }

        return 0;
}
