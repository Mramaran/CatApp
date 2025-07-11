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
    int tot =0;
    
    for (int i=0 ; i<n ; i++){
        tot+=*(arr+i);
    }
    float avg =tot/n;
    printf("Total:%d\nAverage:%f",tot,avg);
    return 0;
}