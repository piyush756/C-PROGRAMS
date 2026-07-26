#include<stdio.h>
int main()
{
    int row;
    printf("enter the number of rows :\n");
    scanf("%d",&row);
    for(int i=0;i<row;i++) {
        for(int j=0;j<row-i-1;j++) {
            printf(" ");

        }
        for(int j=0;j<(2*i+1);j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}