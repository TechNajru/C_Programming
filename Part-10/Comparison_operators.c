#include <stdio.h>
int main()
{
    int num1 = 20;
    int num2 = 10;

    printf("%d \n", num1 > num2);
    printf("%d \n", num1 < num2);
    printf("%d \n", num1 <= num2);
    printf("%d \n", num1 >= num2);
    printf("%d \n", num1 == num2);
    printf("%d \n", num1 != num2);

    int num3 = num1 == num2;
    printf("%d \n", num3);

    return 0;
}