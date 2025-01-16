#include<stdio.h>

int main()
{
    int marks;
    printf("Enter the Number (0-100) : ");
    scanf("%d", &marks);

    if(marks >= 55 && marks <= 100) {
        printf("Congratulations, you are PASSED");
    } else if(marks <= 55) {
        printf("Sorry, You are FAILED");
    } else {
        printf("Wrong Number");
    }
    return 0;
}
