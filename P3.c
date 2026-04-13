//Find out maximum and minimum number using pointer to function.
#include <stdio.h>
void findExtrema(int a, int b, int *max, int *min)
{
    *max = (a > b) ? a : b;
    *min = (a < b) ? a : b;
}
int main()
{
    void (*ptr)(int, int, int*, int*) = findExtrema;
    int x = 15, y = 30, max, min;
    ptr(x, y, &max, &min);
    printf("Max: %d, Min: %d", max, min);
    return 0;
}
