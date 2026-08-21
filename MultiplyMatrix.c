//ques : write a program to perfrome multiplications of two matrices.
#include<stdio.h>
int main(){
    int r1,r2,c1,c2;
    printf("enter the row and coloumn of matrix A :\n");
    scanf("%d%d",&r1,&c1);
    printf("enter the row and coloumn of matrix B :\n");
    scanf("%d%d",&r2,&c2);
    if(c1==r2){
        printf("multiplication possible!! \n");
        int A[r1][c1],B[r2][c2],product[r1][c2];
        printf("enter the elements in matrix A : \n");
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                scanf("%d",&A[i][j]);
            }
        }
        printf("enter the elements in matrix B : \n");
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                scanf("%d",&B[i][j]);
            }
        }
        printf("Matrix A :\n");
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                printf("%d ",A[i][j]);
            }printf("\n");
        }

        printf("Matrix B :\n");
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                printf("%d ",B[i][j]);
            }printf("\n");
        }
        printf("A X B :\n");
        int sum=0;
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                for(int k=0;k<r2;k++){
                    sum+=A[i][k]*B[k][j];
                }product[i][j] = sum;
                sum=0;
            }
        }for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                printf("%d ",product[i][j]);
            }printf("\n");
        }return 0; 
    }else{
        printf("matrix not possible!!");
    }
}