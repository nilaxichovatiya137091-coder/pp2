#include<stdio.h>
struct test1
{
   int x;
   float y;
   char z[20];
   };
union test2
{
  int x;
  float y;
  char z[20];
};

  int main()
  {
    struct test1 s;
    union test2 u;




    printf("size of structure = %d",sizeof(s));
    printf("\nsize of union = %d",sizeof(u));


    return 0;

    }
