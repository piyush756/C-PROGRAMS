//ques : Write a program to check whether any of the digits in a number appear more than once.
#include<stdio.h>
#include<stdbool.h>
int seen[10]={0};
int main(){
    int N,rem,num;
    bool repeat = false;
    printf("enter the number:\n");
    scanf("%d",&num);
    N=num;
    while(N>0){
        rem=N%10;
        if(seen[rem]==1){
            repeat=true;
            break;
        }seen[rem]=1;
        N/=10;
    }
    if(repeat){
        printf("%d does contain repeatitive digits\n",num);
    
    }else{
        printf("%d does not contain repeatitive digits\n",num);
    }
}
