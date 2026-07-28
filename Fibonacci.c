#include<stdio.h>
int main(){
    int n,a=0,b=1,result;
    printf("enter the number of terms :\n");
    scanf("%d",&n);
    printf("fibonnaci series upto %d ters :\n",n);
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        result =a+b;
        a=b;
        b=result;
    }

}