//ques : Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

#include<stdio.h>
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    int s1[1001]={0};
    int s2[1001]={0};
    for(int i=0;i<nums1Size;i++){
        s1[nums1[i]]=1;
    }for(int i=0;i<nums2Size;i++){
        s2[nums2[i]]=1;
    }
    int minSize = (nums1Size>nums2Size) ? nums2Size : nums1Size;
    int count=0;
    int* result = (int*)malloc(minSize*sizeof(int));
    for(int i=0;i<minSize;i++){
        if(s1[nums1[i]] && s2[nums2[i]]){
            result[count++]=nums1[i];
        }
    }*returnSize=count;
    return result;
}