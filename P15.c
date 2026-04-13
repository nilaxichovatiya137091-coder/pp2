//Copy a string into another.
#include <stdio.h>
#include <string.h>
int main()
{
    char src[] = "source", dest[20];
    strcpy(dest, src);
    printf("Copied: %s", dest);
    return 0;
}
