#include<stdio.h>

struct Student
{
int roll;
char name[20];
float marks;
};

void main()
{
struct Student s1={101,"Radhe",80};
struct Student s2;
printf("Enter rollno, name & marks:");
scanf("%d%s%f",&s2.roll,s2.name,&s2.marks);
printf("Rollno = %d\n",s1.roll);
printf("Name = %s\n",s1.name);
printf("Marks = %f\n",s1.marks);
printf("Rollno = %d\n",s2.roll);
printf("Name = %s\n",s2.name);
printf("Marks = %f\n",s2.marks);
}
