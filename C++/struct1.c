#include<stdio.h>
struct Student
{
int roll;
char name[20];
float marks;
};

void main()
{
struct Student *ptr;

ptr = (struct Student*)malloc(sizeof(struct Student));
printf("Enter rollno, name & marks:");
scanf("%d%s%f",&ptr->roll,ptr->name,&ptr->marks);
printf("Rollno = %d\n",ptr->roll);
printf("Name = %s\n",ptr->name);
printf("Marks = %f\n",ptr->marks);
}
