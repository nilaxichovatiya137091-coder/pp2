//Enter 5 strings and arrange them in ascending order.
#include <stdio.h>
#include <string.h>
int main()
{
    char s[5][20], temp[20];
    for(int i=0; i<5; i++) scanf("%s", s[i]);
    for(int i=0; i<4; i++)
        for(int j=i+1; j<5; j++)
            if(strcmp(s[i], s[j]) > 0)
            {
                strcpy(temp, s[i]); strcpy(s[i], s[j]); strcpy(s[j], temp);
            }
    for(int i=0; i<5; i++) printf("%s ", s[i]);
    return 0;
}
