#include <stdio.h>

int main() {

  int n,i=1,sum=0;

  printf("Enter the last term of the series: " );
  scanf("%d",&n );

  printf("\n\nThe Series is: \n\n" );

  for(i=1;i<=n;i=i+2){

    (i<n) ? printf("%d + ",i ):printf(" %d\n",i );
    sum+=i;
  }

  printf("\n\nThe sum of the series is %d .\n",sum );














  return 0;
}
