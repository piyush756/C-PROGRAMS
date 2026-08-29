#include<stdio.h>
int main(){
    int n;
    printf("enter the number :\n");
    if(scanf("%d",&n)!=1 || n<=0){
        printf("the number is not ugly!!\n");
        return 0;
    }
    int factor[]={2,3,5};
    for(int i=0;i<3;i++){
        while(n % factor[i]==0){
            n/=factor[i];
        }
    }    
    if(n==1){
        printf("the number is ugly!!\n");
    }else{
        printf("the number is not ugly!!\n");
    }
}