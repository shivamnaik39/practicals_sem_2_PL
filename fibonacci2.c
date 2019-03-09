#include <stdio.h>

int main() {
        int i,n;
        long long int a=0,b=1,c;
        float d;

        printf("Enter the upper limit of fibonacci sequence: " );
        scanf("%d",&n );

        while (a<=n) {
                //  printf("%d  ",a );
                c=a+b;
                a=b;
                b=c;
                d=(1.0*a)/b;
                printf("%.3f\n",d );
        }







        return 0;
}
