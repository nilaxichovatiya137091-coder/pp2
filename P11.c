//Enter a string and print it in uppercase letters.
#include <stdio.h>
#include <ctype.h>
int main()
{
    char s[] = "hello";
    for(int i=0; s[i]; i++) s[i] = toupper(s[i]);
    printf("%s", s);
    return 0;
}
