#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    int ch;
    int chars = 0, spaces = 0, tabs = 0, lines = 0;

    fp = fopen("sample.txt","r");
    if(fp == NULL){
        printf("Error!\n");
        exit(1);
    }

    while ((ch = fgetc(fp)) != EOF){
        chars++;

        if(ch == ' ')
            spaces++;
        else if (ch == '\t')
            tabs++;
        else if (ch == '\n')
            lines++;
    }

    fclose(fp);

    printf("total characters : %d\n", chars);
    printf("blank space : %d\n", spaces);
    printf("tabs : %d\n", tabs);
    printf("lines : %d\n", lines);

    return 0;
}
