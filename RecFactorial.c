#include<stdio.h>
int Fact(int n){
    if(n==0){
        return 1;
    }
    return n*Fact(n-1);
}
int main(){
    int num,fact;
    printf("enter the number :\n");
    scanf("%d",&num);
    fact=Fact(num);
    printf("factorial of  %d : %d\n",num,fact);
}