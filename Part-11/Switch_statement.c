#include <stdio.h>
int main()
{
    int day = 1;
    int day1 = 5;

    switch (day1)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thusday");
        break;
    case 5:
        printf("friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("sunday");
        break;
    default:
        break;
    }
    return 0;
}