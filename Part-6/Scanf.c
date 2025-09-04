// Scanf Function is used to take user input

#include <stdio.h>
void main()
{
    int age;
    printf("enter your age : ");
    scanf("%d", &age);
    printf("your age is : %d \n", age);

    int num1, num2;
    printf("enter Two numbers :");
    scanf("%d %d ", &num1, &num2);
    printf("value of num1 is : %d, value of num2 is : %d ", num1, num2);
}