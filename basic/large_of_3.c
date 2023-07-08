#include<stdio.h>

int main()
{ 
	/* This program is finding the large of three number using nested if else*/ 
    int a, b, c;
    printf("Enter the three numbers : ");
    scanf("%d%d%d", &a, &b, &c);
    if (a < b)
    {
        if (b < c)
        {
            printf("Largest number is : %d", c);
        }
        else if (b > c)
        {
            printf("Largest number is : %d", b);
        }
    }
    else
    {
        printf("Largest number is : %d", a);
    }

    return 0;
}

