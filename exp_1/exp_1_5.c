#include <stdio.h>
void main(){
    int mat[3][3] , ans[3][3];
    printf("Enter the elemets of matrix 1:\n");
    for (int i=0 ; i<3 ; i++){
        for (int j=0 ; j<3 ; j++){
            scanf("%d",&mat[i][j]);
        }
    }

    printf("Matrix :\n");
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            ans[i][j]=mat[j][i];
        }
    }
    printf("Transpose Matrix :\n");
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
}