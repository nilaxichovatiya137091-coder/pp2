//Compare two strings and find out strings are same or not.
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "abc", s2[] = "abc";
    if(strcmp(s1, s2) == 0) printf("Same");
    else printf("Not same");
    return 0;
}
