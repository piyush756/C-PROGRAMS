#include<stdio.h>
void minMax(int arr[],int len,int *min,int *max){
    *min=*max=arr[0];
    int i;
    for(i=1;i<len;i++){
        if(arr[i]>*max){
            *max = arr[i];
        }if(arr[i]<*min){
            *min = arr[i];
        }
    }
}
int main(){
    int len;
    printf("enter the number of elements :\n");
    scanf("%d",&len);
    int a[len];
    for(int i=0;i<len;i++){
        scanf("%d",&a[i]);
    }
    int min,max;
    minMax(a,len,&min,&max);
    printf("min : %d and max : %d\n",min,max);
    return 0;
}