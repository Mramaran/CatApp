#include <stdio.h>
void main(){
    int mat1[3][3],mat2[3][3],ans[3][3];
    printf("Enter the elemets of matrix 1:\n");
    for (int i=0 ; i<3 ; i++){
        for (int j=0 ; j<3 ; j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Matrix 1:\n");
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }
    printf("Enter the elemets of matrix 2:\n");
    for (int i=0 ; i<3 ; i++){
        for (int j=0 ; j<3 ; j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("Matrix 2:\n");
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }
    for (int i=0 ; i<3 ; i++){
        for (int j=0 ; j<3 ; j++){
            ans[i][j]=0;
        }
    }
    for (int i=0 ; i<3 ; i++){
        for (int j=0 ; j<3 ; j++){           
            for (int k=0 ; k<3 ; k++){
                ans[i][j] += mat1[i][k] * mat2[k][j];
            }

        }
    }
    printf("Product matrix :\n");
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
}