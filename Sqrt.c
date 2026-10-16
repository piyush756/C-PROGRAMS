//ques : Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.You must not use any built-in exponent function or operator.

#include<stdio.h>

int mySqrt(int x){
    if(x==1 || x==0){
        return x;
    }
    long long left=0;
    long long right=x,ans=0;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(mid*mid==x){
            return mid;
        }
        else if(mid*mid<x){
            ans=mid;
            left=mid+1;
        }else{
            right=mid-1;
        }
    }return ans;
}