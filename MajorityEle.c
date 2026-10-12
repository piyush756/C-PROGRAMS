//ques : Given an array nums of size n, return the majority element.The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

#include<stdio.h>
int majorityElement(int* nums, int numsSize){
    int candidate=0;
    int count=0;
    for(int i=0;i<numsSize;i++){
        if(count==0){
            candidate=nums[i];

        }
        if(candidate==nums[i]){
            count++;
        }else{
            count--;
        }
    }return candidate;
}   
