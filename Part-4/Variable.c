// Data is a any type of Information
// DATA TYPES : Different types of information

/*
                    DIFFERENT DATA TYPES :
Integer (no. without decimal) -         3,56,785,34567, etc...   (2 bytes, int)

Floating-Point (no. with decimal) -     2.0, 34.5, 345.68, etc...   (4 bytes, float)

Character (Alphabets) -                 "x", "y", "a", "b", "f", etc...  (1 byte, char)

Void (empty data type) -                use when define  a function, no value in it  (0 bytes)
*/

//      VARIABLE:
//               Name of a memory location that we use for storing data / value (age = 18)
//               int (data_type) age (variable_name) = 45; (assigning value)

#include <stdio.h>
void main()
{
    // Declaration of Variables

    int count;
    float number, total, sum;
    char option;

    // assigning value to variables or initalization

    count = 100;
    number = 20.5;
    total = 35.6;
    count = count + 300;
    option = 'B';
    option = 'A';

    // Declaration and initalization in one line

    int final_value = 65;
    float num1 = 10.5, num2 = 20.5;
    char opt = 'c';

    printf("%d \n%d \n%f \n%c \n%c", count, final_value, total, option, opt);
}