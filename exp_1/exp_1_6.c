#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    int* arr;
    printf("Enter the number the terms : ");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    if (arr==NULL){
        printf("Memory not allocated");
        return 1;;
    }
    for (int i=0;i<n;i++){
        printf("Enter the element %d :",i+1);
        scanf("%d",(arr+i));
    }
    printf("The elements : ");
    for (int i=0 ; i<n ;i++){
        printf("%d ",*(arr+i));
    }
    return 0;
}