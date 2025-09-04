// Constants are same as variable but difference is that value of constant can't change after initalization

#include <stdio.h>
void main()
{
    const int num = 45;
    printf("Value of num is : %d \n", num);
    // num = num - 5;         // can't change value of num because of read-only variable 'num'

    const float PI = 3.1415;
    float r, area, perimeter;

    printf("Enter value of Radius :");
    scanf("%f", &r);

    area = PI * r * r;
    perimeter = 2 * PI * r;

    printf("value of Area of circle is : %f \n", area);
    printf("value of perimeter is : %f", perimeter);
}