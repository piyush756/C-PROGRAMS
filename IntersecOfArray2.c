//ques : Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.

#include<stdio.h>
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    int s1[1001]={0};
    int s2[1001]={0};
    for(int i=0;i<nums1Size;i++){
        s1[nums1[i]]++;
    }for(int i=0;i<nums2Size;i++){
        s2[nums2[i]]++;
    }
    int k=0;
    int maxSize=(nums1Size > nums2Size) ? nums1Size : nums2Size;
    int* r= (int*)malloc(maxSize*sizeof(int));
    for(int i=0;i<1001;i++){
        int common=(s1[i]>s2[i]) ? s2[i] : s1[i];
        for(int j=0;j<common;j++){
            r[k++]=i;
        }
    }*returnSize=k;
    return r;
}