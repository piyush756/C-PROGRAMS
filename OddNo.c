#include<stdio.h>
int main()
{
    printf("enter the number till you want odd numbers :\n");
    int z,n=2;
    scanf("%d",&z);
    int count=0;
    printf("printing odd numbers from 1 to %d :\n",z);
    for(int i=1;i<=z;i++){
        if(i==n){
            n=n+2;
            continue;
        }printf("%d\n",i);
        count++;

        
    }printf("total odd numbers are : %d\n",count);
}