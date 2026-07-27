#include<stdio.h>
int main()
{
    int num,q,count,remainder;
    printf("enter the number :\n");
    scanf("%d",&num);
    int order=0;
    q=num;
    while(q !=0){
        q=q/10;
        order++;
    }
    int result=0;
    int mul=1;
    count=order;
    q=num;
    while(q !=0){
        remainder =q%10;
        while(count !=0){
            mul=mul*remainder;
            count--;
        }
        result = result +mul;
        count=order;
        q=q/10;
        mul=1;
    }
    if(result == num){
        printf("the number is armstrong!!\n");
    }
    else{
        printf("the number is not a armstrong !!\n");
    }
    return 0;
}