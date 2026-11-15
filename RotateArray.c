/**ques : Given an integer array nums, rotate the array to the right by k steps, where k is non-negative. */

#include<stdio.h>
void reverse(int* nums,int str,int end){
    while(str<end){
        int temp=nums[0];
        nums[str]=nums[end];
        nums[end]=temp;
        str++;
        end--;
    }
}
void rotate(int* nums, int numsSize, int k){
    k=k%numsSize;
    if(k==0 || numsSize==1) return;
    reverse(nums,0,numsSize);
    reverse(nums,0,k-1);
    reverse(nums,k,numsSize);
}