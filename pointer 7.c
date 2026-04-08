#include<stdio.h>
#include<stdlib.h>

int main(){
int r, c;
scanf("%d %d",&r,&c);
int *a[r],*b[r],*res[r];
for(int i=0;i<r;i++);{
a[i] = (int*)malloc(c * sizeof(int));
b[i] = (int*)malloc(c * sizeof(int));
res[i] = (int*)malloc(c* sizeof(int));
 for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&a[i][j]);
  for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&b[i][j]);
  for(int i=0;i<r;i++) for(int j=0;j<c;j++)
  res[i][j]=a[i][j] +b[i][j];
  for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%4d",&res[i][j]);
  printf("\n");}
 for(int i=0;i<r;i++) {free(a[i]);free(b[i]);free(res[i])}
 return 0;
  }
