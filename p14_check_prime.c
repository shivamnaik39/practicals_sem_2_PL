#include <stdio.h>

int main() {

        int num,i;

        printf("Enter a number: " );
        scanf("%d",&num );


        for(i=2; i<num; i++) {

                if(num%i==0) {
                        break;
                }
        }

        if(num==i) {
                printf("%d is a PRIME NUMBER.\n\n\n",num);
        }

        else{
                printf("%d is NOT a PRIME NUMBER.\n\n\n",num );
        }


        return 0;
}
