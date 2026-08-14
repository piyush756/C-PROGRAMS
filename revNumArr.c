// ques: reverse the entered numbers using array and print them.
#include<stdio.h>
int main(){
    int N;
    printf("enter the number of elements you want to enter:\n");
    scanf("%d",&N);
    int num[N];
    printf("enter the numbers :\n");
    for(int i=0;i<N;i++){
        scanf("%d",&num[i]);
    }
    printf("actual order :\n");
    for(int i=0;i<N;i++){
        printf("%d ",num[i]);
    }printf("\n");
    printf("reverse order :\n");
    for(int i=N-1;i>=0;i--){
        printf("%d ",num[i]);
    }printf("\n");
}