// Code is NOT Complete.........


#include <stdio.h>


int insertion(int array,int elm,int pos,int i,int n);
//int deletion(int array);
//int sort(int array);

int main(){

        int array[100],n,i,c,elm,pos;

        printf("Enter the size of the array: " );
        scanf("%d",&n );

        printf("\n\nEnter the elements of array: " );

        for (i=0; i<n; i++) {
                scanf("%d",&array[i] );
        }

        printf("\n\n\n" );

        printf("1.Insert an element into array\n\n2.Delete an element from array\n\n3.Sort the array", );

        printf("\nEnter your choice: " );
        scanf("%d",&c );


        switch (c) {
        case 1: printf("Enter the element and its position: " );
                scanf("%d %d",&elm,&pos );
                insertion(array,elm,pos,i,n );
                break;

        /*case 2: deletion();
                break;

           case 3: sort();
                break;*/

        default: printf("\nInvalid Choice number\n" );
        }

        return 0;
}


int insertion(int array,int elm,int pos,int i,int n){

  for (i=n-1;i>=pos-1;i--){
    array[i+1]=array[i];
  }

  array[p-1]=elm;

  for (i=0;i<n+1;i++){
    printf("&d | " );
  }

}
