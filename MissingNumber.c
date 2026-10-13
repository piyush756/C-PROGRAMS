// ques: Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

#include<stdio.h>
int missingNumber(int* nums, int numsSize){
    int actual_sum=numsSize*(numsSize+1)/2;
    int present_sum=0;
    for(int i=0;i<numsSize;i++){
        present_sum+=nums[i];
    }return (actual_sum-present_sum);
}