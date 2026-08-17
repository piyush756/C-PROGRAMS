//ques : write a program that reads 5 X 5 array of integers and then print row sum and coloumn sum;
#include<stdio.h>
int main(){
    int row,col,sum=0;
    printf("enter the no. of rows :\n");
    scanf("%d",&row);
    printf("enter the no. of coloumns :\n");
    scanf("%d",&col);
    int arr[row][col];
    printf("enter the elements :\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("youur array :\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }printf("\n");
    }
    //for row sum.
    printf("row total : ");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        printf("%d ",sum);
        sum=0;
    }
    //for coloumn sum.
    printf("coloumn total : ");
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            sum+=arr[j][i];
        }printf("%d ",sum);
        sum=0;
    }printf("\n");
}