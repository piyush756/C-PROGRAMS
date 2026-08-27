#include<stdio.h>
int main(){
    int len,sum=0,*p;
    printf("enter the number of elements you want to enter : \n");
    scanf("%d",&len);
    int arr[len];
    printf("enter the numbers :\n");
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    for(p=&arr[0];p<=&arr[len-1];p++){
        sum+=*p;
    }
    printf("the sum of numbers : %d\n",sum);
}