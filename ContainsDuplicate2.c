/**Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k. */

#include<stdlib.h>
#include<stdbool.h>
typedef struct{
    int val;
    int idx;
}ele;
int compare(const void* a,const void* b){
    ele* A=(ele*)a;
    ele* B=(ele*)b;
    if(A->val != B->val){
        return (A->val>B->val)-(A->val<B->val);
    }return (A->idx)-(B->idx);
}
bool containsNearbyDuplicate(int* nums, int numsSize, int k){
    if(numsSize<=1 || k<=0){
        return false;
    }
    ele* arr= (ele*)malloc(numsSize*sizeof(ele));
    for(int i=0;i<numsSize;i++){
        arr[i].val=nums[i];
        arr[i].idx=i;
    }

    qsort(arr,numsSize,sizeof(ele),compare);

    for(int i=1;i<numsSize;i++){
        if(arr[i].val==arr[i-1].val && (arr[i].idx-arr[i].idx)<=k){
            free(arr);
            return true;
        }
    }free(arr);
    return false;
}
