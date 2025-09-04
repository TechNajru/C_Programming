#include <stdio.h>

int sum(int x, int y)
{
    int sum = x * y;
    return sum;
}

int main()
{
    sum(24, 2);
    int result;
    result = sum(24, 2);
    printf("%d ", result);
    return 0;
}
