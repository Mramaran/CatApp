#include <stdio.h>
struct Student
{
    char name[25];
    int age;
    char grade;
};

void main(){
    struct Student stud;
    struct Student *p_stud = & stud;
    printf("Enter the Student name : ");
    scanf("%s",  p_stud ->name);
    printf("Enter the Student age : ");
    scanf("%d", & p_stud ->age);
    printf("Enter the Student grade : ");
    scanf("\n%c", & p_stud ->grade);

    printf("Student Details :\n");
    printf("Name:%s\n",p_stud -> name);
    printf("Age:%d\n",p_stud -> age);
    printf("Grade:%c\n",p_stud -> grade);

}