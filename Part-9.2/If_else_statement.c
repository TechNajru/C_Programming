#include <stdio.h>

int main()
{
    int age = -14;
    if (age > 18)
    {
        printf("eligible for vote in india");
    }
    else if (age < 0)
    {
        printf("enter valid age in positive numbers only");
    }
    else
    {
        printf("not eligible for vote..");
    }

    return 0;
}