#include<stdio.h>
#include<stdlib.h>

int main()
{
FILE *fp;
char content[]= "hello, this is BCA file handling program!";
char ch;

fp=fopen("sample1.txt","w");
if(fp == NULL){
printf("error opening file!\n");
exit(1);}
fprintf(fp,"%s",content);
fclose(fp);
printf("data written to file successfully.\n");
 fp = fopen ("sample1.txt", "w");
 if(fp == NULL)
 {
 printf("error opening file!\n");
 exit(1);}
  printf("content of file:\n");
  while ((ch = fgetc(fp)) !=EOF)
  putchar(ch);
  fclose(fp);
  return 0 ;
  }
