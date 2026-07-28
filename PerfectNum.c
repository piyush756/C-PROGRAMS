#include<stdio.h>
int main()
{
    int num,count=0;
    printf("enter the positive integer :\n");
    scanf("%d",&num);
    for(int i=1;i<num;i++){
        if(num%i==0){
            count+=i;
        }
    }
    if(count==num){
        printf("%d is a perfect number.\n",num);
    }else{
        printf("%d is not a perfect number.\n",num);
    }
    return 0;
}