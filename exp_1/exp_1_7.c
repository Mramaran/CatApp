#include <stdio.h>
struct Student
{
    char name[25];
    int age;
    char grade;
}stud[5];

void main(){
    for (int i=0 ; i<5 ; i++){
        printf("Enter Student %d details :\n",i+1);
        printf("Enter Name : ");
        scanf("%s",stud[i].name);
        printf("Enter Age : ");
        scanf("%d",&stud[i].age);
        printf("Enter Grade : ");
        scanf("\n%c",&stud[i].grade);
    }
    printf("Students Info\n--------------");
    for (int i=0 ; i<5 ;i++){
        printf("Student %d\n",i+1);
        printf("Name:%s\nAge:%d\nGrade:%c",stud[i].name,stud[i].age,stud[i].grade);
    }
}
