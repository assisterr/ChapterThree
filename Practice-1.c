#include<stdio.h>

int main()
{
    int number;
    printf("Enter a Number: ");
    scanf("%d", &number);

    if(number >= 0) {
        printf("Positive\n");
        if(number % 2 == 0) {
            printf("Even");
        } else {
            printf("Odd");
        }
    } else {
        printf("Negative");
    }
    return 0;
}
