#include <stdio.h>


int main()
{

        int i,a=0,b=1,c;

        while(a<=100) {
                printf("%d + ",a);
                c=a+b;
                a=b;
                b=c;

        }




        return 0;
}
