//Enter N elements and find out sum of prime numbers using dynamic array.
#include <stdio.h>
#include <stdlib.h>
int isPrime(int n)
{
    if (n < 2) return 0;
    for (int i = 2; i*i <= n; i++) if (n % i == 0) return 0;
    return 1;
}
int main()
{
    int n, sum = 0;
    printf("Enter N: "); scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        if(isPrime(arr[i])) sum += arr[i];
    }
    printf("Sum of Primes: %d", sum);
    free(arr);
    return 0;
}
