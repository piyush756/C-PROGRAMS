//ques : to add two numbers without using "+" operator.(HALF-ADDER LOGIC!!)

#include<stdio.h>
int main(){
    int a,b,sum,carry;
    printf("add first number : ");
    scanf("%d",&a);
    printf("add second number : ");
    scanf("%d",&b);
    while(b!=0){
        sum=a^b;
        carry=(a&b)<<1;
        a=sum;
        b=carry;
    }
    printf("sum : %d\n",a);
}