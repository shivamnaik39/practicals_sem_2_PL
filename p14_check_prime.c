
#include <stdio.h>
#include <stdlib.h>

int main()
{


        int num,i;

        printf("\nEnter a Number: ");
        scanf("%d",&num);

        for (i=2; i<num; i++)
        {
                if (num%i==0)
                {break;}
        }

        if (num==i)
        { printf("\n\nThe given number %d is a Prime Number.\n\n",num); }

        else
        { printf("\n\nThe given number %d is Not a prime number\n\n",num); }




        return 0;

}
