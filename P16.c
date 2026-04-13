//Enter a string and find out the string is palindrome or not.
#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "radar";
    int l = 0, h = strlen(s) - 1, flag = 1;
    while(h > l) if(s[l++] != s[h--]) { flag = 0; break; }
    if(flag) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}
