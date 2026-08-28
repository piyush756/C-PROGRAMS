//ques : to add element in 2-D array using pointers
#include<stdio.h>
int main(){
    int row,col,*p;
    printf("enter row and coloumn :\n");
    scanf("%d",&row);
    scanf("%d",&col);
    int a[row][col];
    printf("enter the elements :\n");
    for(p=&a[0][0];p<=&a[row-1][col-1];p++){
        scanf("%d",p);
    }
    printf("the element in the array are :\n");
    for(p=&a[0][0];p<=&a[row-1][col-1];p++){
        printf("%d ",*p);
    }
}