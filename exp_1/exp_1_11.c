#include <stdio.h>
struct Student
{
    char name[25];
    int age, class,tot;
    

}stud[5];

void swap(struct Student *stud1 , struct Student *stud2){
    struct Student temp = *stud1;
    *stud1 = *stud2;
    *stud2 = temp;
}
void main(){
    for (int i=0 ; i<5 ; i++){
        printf("Enter Student %d details :\n",i+1);
        printf("Enter Name : ");
        scanf("%s",stud[i].name);
        printf("Enter Age : ");
        scanf("%d",&stud[i].age);
        printf("Enter Total : ");
        scanf("\n%d",&stud[i].tot);
        printf("Enter Class : ");
        scanf("%d",&stud[i].class);
    }

    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (stud[j].tot < stud[j + 1].tot) {
                swap(&stud[j], &stud[j + 1]);
            }
        }
    }
    
    printf("Students Info From Hightest mark to Lowest \n-------------------------");
    for (int i=0 ; i<5 ;i++){
        printf("Student %d\n",i+1);
        printf("Name:%s\nAge:%d\nTotal:%d\nClass:",stud[i].name,stud[i].age,stud[i].tot,stud[i].class);
    }
}
