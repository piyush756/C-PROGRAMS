//ques : Given an m x n matrix, return all elements of the matrix in spiral order.

#include<stdio.h>
#include<stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize){
    int row=matrixSize;
    int col=matrixColSize[0];
    *returnSize=row*col;
    int* result = (int*)malloc((row*col)*sizeof(int));
    int left=0,right=col-1;
    int top=0,bottom=row-1;
    int i=0,k=0;
    while(left<=right && top<=bottom){
        for(int i=left;i<=right;i++){
            result[k++]=matrix[top][i];
        }top++;
        for(int i=top;i<=bottom;i++){
            result[k++]=matrix[i][right];
        }right--;
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                result[k++]=matrix[i][left];
            }left++;
        }if(top<=bottom){
            for(int i=right;i>=left;i--){
                result[k++]=matrix[bottom][i];
            }bottom--;
        }
    }return result;
}