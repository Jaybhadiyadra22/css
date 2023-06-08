#include <stdio.h>

int main()
{
    int month;

    /* Input month number from user */
    printf("Enter month number(1-12): ");
    scanf("%d", &month);

    switch(month)
    {
        case 1: 
            printf("January ");
            break;
        case 2: 
            printf("February");
            break;
        case 3: 
            printf("March");
            break;
        case 4: 
            printf("April");
            break;
        case 5: 
            printf("May");
            break;
        case 6: 
            printf("june");
            break;
        case 7: 
            printf("july");
            break;
        case 8: 
            printf("august");
            break;
        case 9: 
            printf("september");
            break;
        case 10: 
            printf("october");
            break;
        case 11: 
            printf("nevember");
            break;
        case 12: 
            printf("december");
            break;
        default: 
            printf("Invalid input! Please enter month number between 1-12");

    }

    return 0;
}
