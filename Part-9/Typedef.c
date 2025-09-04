// User defined type declaration means user can declare the data type of variable according to their use
// Example-   typedef float marks
//                                marks maths;
//                                marks science;

#include <stdio.h>
void main()
{
    float math;
    float science;

    math = 93.5;
    science = 86.5;

    printf("marks in math is : %f\n and marks in science in %f \n", math, science);

    typedef float score;
    score hindi = 85.5;
    score english = 95.50;

    printf("score in hindi is : %f \n and score in english %f", hindi, english);
}