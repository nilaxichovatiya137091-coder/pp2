//Add two matrices using array of pointers.
#include <stdio.h>
int main()
{
    int r=2, c=2, i, j;
    int a[2][2] = {{1,2},{3,4}}, b[2][2] = {{5,6},{7,8}}, res[2][2];
    int *pa[2], *pb[2], *pr[2];
    for(i=0; i<r; i++) { pa[i]=a[i]; pb[i]=b[i]; pr[i]=res[i]; }
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            *(pr[i]+j) = *(pa[i]+j) + *(pb[i]+j);
    printf("Result: %d %d %d %d", res[0][0], res[0][1], res[1][0], res[1][1]);
    return 0;
}
