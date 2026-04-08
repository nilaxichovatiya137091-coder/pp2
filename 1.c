#include<stdio.h>

int main(){

int num=5;
int * iptr =&num;
printf("\nvalue of num is : %p",num);
num=10;
printf("\nvalue of num is :%d",num);
num=15;
printf("\nvalue of num is :%p",num);

return 0;
}
