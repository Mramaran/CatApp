#include <stdio.h>
struct Employee
{
    char name[25];
    int id,salary;
 
}emp[10];

void main(){
    for (int i=0 ; i<10 ; i++){
        printf("Enter Enployee %d details :\n",i+1);
        printf("Enter Id : ");
        scanf("%d",&emp[i].id);
        printf("Enter Name : ");
        scanf("%s",emp[i].name);
        printf("Enter Salary : ");
        scanf("%d",&emp[i].salary);
    }
    printf("Employee Info\n--------------");
    for (int i=0 ; i<10 ;i++){
        printf("Employee %d\n",i+1);
        printf("Employee ID :%d\nName:%s\nSalary:%c",emp[i].id,emp[i].name,emp[i].salary);
    }
}
