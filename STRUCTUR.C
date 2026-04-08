#include<stdio.h>
#include<conio.h>
struct student
{
int rollno;
char name[20];
char department[40];
int year;
float score;
};
void main()
{
struct student s[5];
int i;
clrscr();
for(i=0;i<5;i++){
printf("\nenter details of student %d\n",i+1);
printf("roll no:");
scanf("%d" &s[i].roll no);
printf("name:");
scanf("%s",s[i].name);
printf("department:");
scanf("%s",s[i]department);
printf("year:");
scanf("%d",&s[i].year);
printf("score:");
scanf("%f",&s[i].score);
}
printf("\n---student records ---\n");
for(i=0;i<5;i++)
{
printf("\nrollno: %d name:%s score:%.2f",s[i].rollno,s[i].name,s[i].score);
}
getch();
}