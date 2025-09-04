#include <stdio.h>

void sum(int x, int y, int z)
{
    int sum = x + y + z;
    printf("%d ", sum);
}

int main()
{
    sum(12, 6, 100);
    return 0;
}