#include <stdio.h>
void main(){
    int arr[10];
    
    for (int i=0 ; i<10 ; i++){
        printf("Enter the element%d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The elements are : ");
    for (int i=0 ; i<10 ; i++){
        printf("%d ",arr[i]);
    }
}