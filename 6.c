#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp, *odd, *even;
    int i, num;

    // 1. Write numbers 1 to 10 into DATA.txt
    fp = fopen("DATA.txt", "w");
    if (fp == NULL) {
        printf("Error opening DATA.txt for writing.\n");
        return 1;
    }
    for (i = 1; i <= 10; i++) {
        fprintf(fp, "%d\n", i);
    }
    fclose(fp);

    // 2. Open DATA.txt to read and ODD/EVEN files to write
    fp = fopen("DATA.txt", "r");
    odd = fopen("ODD.txt", "w");
    even = fopen("EVEN.txt", "w");

    // Check if files opened successfully
    if (fp == NULL || odd == NULL || even == NULL) {
        printf("Error opening files for processing.\n");
        return 1;
    }

    // 3. Read from DATA.txt and sort into ODD and EVEN
    while (fscanf(fp, "%d", &num) != EOF) {
        if (num % 2 != 0) { // Using the modulo operator '%' for remainder
            fprintf(odd, "%d\n", num);
        } else {
            fprintf(even, "%d\n", num);
        }
    }

    // 4. Close all open file pointers
    fclose(fp);
    fclose(odd);
    fclose(even);

    printf("Data processing complete. Check ODD.txt and EVEN.txt.\n");

    return 0;
}
