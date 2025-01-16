#include<stdio.h>

int main()
{
    char ch;
    printf("Enter a Character : \n");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z') {
        printf("Upper Character");
    } else if(ch >= 'a' && ch <= 'z') {
        printf("Lower Character");
    } else {
        printf("Not Eligible Letter");
    }
    return 0;
}
