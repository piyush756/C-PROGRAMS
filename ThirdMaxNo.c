//ques :You are given an integer array nums.Return the third distinct maximum number in this array. If the third maximum does not exist, return the maximum number

#include<stdio.h>
#include<limits.h>
int thirdMax(int* nums, int numsSize){
    long long max1=LLONG_MIN;
    long long max2=LLONG_MIN;
    long long max3=LLONG_MIN;
    for(int i=0;i<numsSize;i++){
        long long a=nums[i];
        if(a==max1 || a==max2 || a==max3){
            continue;
        }
        if(a>max1){
            max3=max2;
            max2=max1;
            max1=a;
        }else if(a>max2){
            max3=max2;
            max2=a;
        }else if(a>max3){
            max3=a;
        }
    }return (max3==LLONG_MIN) ? (int)max1 : (int)max3;
}