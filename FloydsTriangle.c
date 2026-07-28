#include<stdio.h>
int main()
{
    int row,num=1;
    printf("enter the number of rows :\n");
    scanf("%d",&row);
    for(int i=0;i<row;i++) {
        for(int j=0;j<=i;j++){
            printf("%d ",num);
            num++;
        }
        for(int j=0;j<=row-1-i;j++){
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}