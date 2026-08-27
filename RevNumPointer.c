#include<stdio.h>
int main(){
    int len,*p;
    printf("enter the number of elements you want to enter : \n");
    scanf("%d",&len);
    int arr[len];
    printf("enter the numbers :\n");
    for(p=arr;p<=arr+len-1;p++){
        scanf("%d",p);
    }
    printf("elements in reverse order :\n");
    for(p=arr+len-1;p>=arr;p--){
        printf("%d ",*p);
    }
    return 0;                       
}