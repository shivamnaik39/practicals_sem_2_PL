#include <stdio.h>

int main() {

        int i,sum=0,n;


        printf("\n\nEnter the upper limit of the series: " );
        scanf("%d",&n );

        int last_term= (n%2==0) ? (n-1) : (n);

        for (i=1; i<=n; i+=2) {

                (i != last_term) ? printf("%d +  ",i ) : printf("%d",i);

                sum+=i;
        }
        printf("\n\nThe sum of the serie till %d  is %d.\n",n,sum);

        return 0;
}
