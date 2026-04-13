//Enter a string and print it in lowercase letters.
#include <stdio.h>
#include <ctype.h>
int main()
{
    char s[] = "HELLO";
    for(int i=0; s[i]; i++) s[i] = tolower(s[i]);
    printf("%s", s);
    return 0;
}
