#include<stdio.h>
int add(int b[],int len){
    int sum=0;
    for(int i=0;i<len;i++){
        sum+=b[i];
    }
    return sum;
}
int main(){
    int len;
    printf("enter the number of elements :\n");
    scanf("%d",&len);
    int a[len];
    printf("enter the elements :\n");
    for(int i=0;i<len;i++){
        scanf("%d",&a[i]);
    }
    printf("sum of all elments :");
    int sum = add(a,len);
    printf(" %d\n",sum);
}