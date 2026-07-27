#include<stdio.h>
int factorial(int r){
    int fact =1;
    while(r!=0){
        fact*=r;
        r--;
    }return fact;
}
int main()
{
    int num,remain,temp,result=0;
    printf("enter the number :\n");
    scanf("%d",&num);
    temp=num;
    while(temp!=0){
        remain =temp%10;
        result+=factorial(remain);
        temp/=10;
    }
    if(result == num && num>0){
        printf("%d is a strong number\n",num);
    }else{
        printf("%d is not a strong number\n",num);
    }
    return 0;
}