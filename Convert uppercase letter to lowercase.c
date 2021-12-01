#include<stdio.h>
int main()
{

    char lower;
    printf("Enter your lower case letter is : ");
    scanf("%c",&lower);  //lowercase letter start at a =97

    printf("Uppercase letter is : %c\n",lower - 32); //Uppercase letter start at A = 65


    char upper;
    printf("Enter your uppercase letter is :");
    scanf("%c",&upper);

    printf("Lower case letter is : %c\n",upper + 32);
    getch();
}
