#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    int* arr=(int*)malloc(n*sizeof(int));
    if (arr==NULL){
        printf("Memory not allocated");
        return 1;
    }
    for (int i=0 ; i<n ;i++){
        printf("Enter the element%d:",i+1);
        scanf("%d",(arr + i));
    }
    for (int i=0 ; i < n/2 ; i++){
        int temp=*(arr+i);
        *(arr+i)=*(arr+n-i-1);
        *(arr+n-i-1)=temp;
    }
    printf("The reversed elements are : ");
    for (int i=0 ; i<n ; i++){
        printf("%d ",arr[i]);
    }
}