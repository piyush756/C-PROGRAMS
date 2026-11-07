//ques : A permutation of an array of integers is an arrangement of its members into a sequence or linear order.
//For example, for arr = [1, 2, 3], the following are all the permutations of arr: [1, 2, 3], [1, 3, 2], [2, 1, 3], [2, 3, 1], [3, 1, 2], [3, 2, 1].
//The next permutation of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).

#include<stdio.h>
void swap(int* a, int* b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
void reverse(int* nums,int str,int end){
    while(str<end){
        swap(str,end);
        str++;
        end--;
    }
}
void nextPermutation(int* nums, int numsSize){
    if(numsSize<=1) return;
    int i=numsSize-2;
    while(i>=0 && nums[i]>=nums[i+1]){
        i--;
    }
    if(i>=0){
        int j=numsSize-1;
        while(nums[i]>=nums[j]){
            j--;
        }swap(&nums[i],nums[j]);
    }
    reverse(nums,i+1,numsSize-1);
}