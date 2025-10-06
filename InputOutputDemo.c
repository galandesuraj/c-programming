#include<stdio.h>
int main()
{
    char Div='\0';
    int age= 0;

    printf("Enter your Division:\n");
    scanf("%c", & Div);

    printf ("Enter your age: \n");
    scanf("%d", & age);

    printf("your Division is: %d", age);

    return 0;
}