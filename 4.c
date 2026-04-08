#include<stdio.h>
#include<stdlib.h>
int main(){
     FILE *fp;
     char data[100];
     printf("enter text to append:");
     fgets(data,sizeof(data),stdin);
     fp = fopen("sample.txt","a");
     if(fp == NULL){printf("error!\n");
     exit(1);}
     fprintf(fp, "%s", data);
     fclose(fp);
     printf("content appended successfully!\n");
     return 0;
     }
