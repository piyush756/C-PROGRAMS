//ques : make an integer arrray and return the index value of the required number.
#include<stdio.h>
#include<stdbool.h>
int main(){
    printf("enter the number of elements you want to enter :\n");
    int N,ele,idx;
    bool found=false;
    scanf("%d",&N);
    int num[N];
    printf("enter the elements\n");
    for(int i=0;i<N;i++){
        scanf("%d",&num[i]);
    }
    printf("enter the numberwhose index value req :\n");
    scanf("%d",&ele);
    for(int i=0;i<N;i++){
        if(num[i]==ele){
            idx=i;
            found=true;
        }
    }if(found==true){
        printf("element index value :%d\n",idx);
    }else{
        printf("element not found\n");
    }

    return 0;
}