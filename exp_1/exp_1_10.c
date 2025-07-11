#include <stdio.h>
#include <stdlib.h>
int main(){
    int row=2,col=2;
    int*** arr2 = malloc(row * sizeof(int**));
    for (int i = 0; i < row; i++)
        arr2[i] = malloc(col * sizeof(int*));
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            arr2[i][j] = malloc(sizeof(int)); 
            printf("Enter the A%d%d  element : ",i+1,j+1);
            scanf("%d", arr2[i][j]); 
        }
    }
    printf("The values are\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", *arr2[i][j]);
        }
        printf("\n");
    }
}