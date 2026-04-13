//Enter N elements and find out sum and average of them using dynamic array.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    float sum = 0;
    printf("Enter N: "); scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum: %.2f, Avg: %.2f", sum, sum/n);
    free(arr);
    return 0;
}
