//Enter N elements and find out sum of odd and even numbers using dynamic array
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, eSum = 0, oSum = 0;
    printf("Enter N: "); scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0) eSum += arr[i];
        else oSum += arr[i];
    }
    printf("Even Sum: %d, Odd Sum: %d", eSum, oSum);
    free(arr);
    return 0;
}
