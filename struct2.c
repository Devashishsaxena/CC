#include<stdio.h>

struct Student
{
int roll;
char name[20];
float marks;
};

void main()
{
struct Student s[5];
int i;
for(i=0; i<=4; i++)
{
printf("Enter rollno, name & marks:\n");
scanf("%d%s%f",&s[i].roll,s[i].name,&s[i].marks);
}
for(i=0; i<=4; i++)
{
printf("Rollno = %d\n",s[i].roll);
printf("Name = %s\n",s[i].name);
printf("Marks = %f\n",s[i].marks);
}
}
/*
Student
roll
name
pmarks
cmarks
mmarks
create array of 5 student
rollno
name
pmarks
cmarks
mmarks
total_marks
percentage
division

Employee
empno
name
salary
exp
create array for 5 employee
empno
name
salary after increment
exp<5 5%
exp<10 10%
exp>=10 15%
Exp
*/
