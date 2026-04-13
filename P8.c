//Subtract two matrices using pointer to pointer.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int r=2, c=2, i, j;
    int **m1 = malloc(r * sizeof(int*)), **m2 = malloc(r * sizeof(int*));
    for(i=0; i<r; i++)
    {
        m1[i] = malloc(c * sizeof(int)); m2[i] = malloc(c * sizeof(int));
    }
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            printf("%d ", m1[i][j] - m2[i][j]);
    return 0;
}
