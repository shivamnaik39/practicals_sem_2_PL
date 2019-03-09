#include <stdio.h>

int main() {

        int day;

        printf("\n\nEnter the day number: " );
        scanf("%d", &day );

        switch (day) {
        case 1: printf("\n\nThe day is Monday.\n\n" );
                break;

        case 2: printf("\n\nThe day is Tuesday.\n\n" );
                break;

        case 3: printf("\n\nThe day is Wednesday.\n\n" );
                break;

        case 4: printf("\n\nThe day is Thursday.\n\n" );
                break;

        case 5: printf("\n\nThe day is Friday.\n\n" );
                break;

        case 6: printf("\n\nThe day is Saturday.\n\n" );
                break;

        case 7: printf("\n\nThe day is Sunday.\n\n" );
                break;

        default: printf("\n\nInvalid Day number!!\n\n" );
        }
        return 0;
}
