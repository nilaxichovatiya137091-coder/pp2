#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    char str[100];
    char ch;
    int len, i;

    // Step 1: Write initial string to greencity.txt
    fp = fopen("greencity.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    fprintf(fp, "Go Green Save City");
    fclose(fp);

    // Step 2: Read content from greencity.txt
    fp = fopen("greencity.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fgets(str, sizeof(str), fp);  // read full line
    fclose(fp);

    // Step 3: Reverse the string
    len = strlen(str);

    fp = fopen("cleancity.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    for (i = len - 1; i >= 0; i--) {
        fputc(str[i], fp);
    }
    fclose(fp);

    // Step 4: Display reversed content
    fp = fopen("cleancity.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Reversed content in cleancity.txt:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}
