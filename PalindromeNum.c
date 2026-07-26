#include<stdio.h>
int main()
{
    printf("enter the number to check whether its palindrome number or not :\n");
    int num,remain;
    scanf("%d",&num);
    int temp=num;
    int result=0;
    while(temp!=0){
        remain = temp%10;
        result = result*10+remain;
        temp/=10;
    }
    if(result == num){
        printf("the number is palindrome\n");
    }else{
        printf("the number is not a palindrome\n");
    }return 0;
}