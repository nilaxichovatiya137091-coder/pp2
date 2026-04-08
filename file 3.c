#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *src, *dest;
    char ch;

    src = fopen("sample.txt", "r");
    dest = fopen("copy.txt","w");

    if(src == NULL || dest == NULL){
        printf("Error opening file!\n");
        exit(1);
    }

    while((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    printf("file copied successfully!\n");

    fclose(src);
    fclose(dest);

    return 0;
}
