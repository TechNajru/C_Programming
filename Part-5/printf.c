// printf function is in-build function in c (stdio.h) to print any thing on screen or terminal

#include <stdio.h>
void main()
{
    // this function will print the value which is in ("") ends with ;

    printf("Najrudeen \n");
    printf("My Name is \'Najrudeen\" Alam \n");
    printf("Name is \\ najru \n");

    // Use Case of printf

    int num = 200;
    printf("%d \n", num);
    float num1 = 20.65;
    printf("%f \n", num1);
    char option = 'b';
    printf("%c \n", option);

    // %d -- int
    // %f -- float
    // %c -- char

    int number1 = 100, number2 = 200, number3 = 300;
    float value1 = 100.100, value2 = 200.200, value3 = 300.300;
    char option1 = 'a', option2 = 'b', option3 = 'c';
    printf("%d \n%f \n%c \n", number1, value2, option3);
    printf(" value of option3 is : %c\n value of value2 is :%f\n value of number1 is : %d", option3, value2, number1);
}
