#include <stdio.h>

int main()
{

        int num,fact=1,i;

        printf("\nEnter a non-negative number: ");
        scanf("%d",&num);

        for (i=1; i<=num; i++)
        {
                fact=fact*i;
        }

        printf("%d! = %d",num,fact);





        return 0;
}
