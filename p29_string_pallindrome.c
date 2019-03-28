//p29.Program to find whether a string is palindrome or not.

#include <stdio.h>

int main(){

        char a[50],b[50],sw;
        int i=0,count=0;

        printf("Enter a string: " );
        gets(a);

        for(i=0;a[i]!='\0';i++){
          b[i] = a[i];
        }

        for(count=0; a[count]; count++) ;

        for (i=0; i<count/2; i++) {
                sw=a[i];
                a[i]=a[count-1-i];
                a[count-1-i]=sw;
        }


        for(i=0;i<count;i++){
          if(a[i] != b[i]){
            break;
          }
        }

        if (i==count){
          printf("\nPALLINDROME\n" );
        }
        else{
          printf("\nNOT A PALLINDROME\n" );
        }




        return 0;
}

/*
OUTPUT:
Enter a string: refer

PALLINDROME

Enter a string: require

NOT A PALLINDROME


*/
