//ques:You are climbing a staircase. It takes n steps to reach the top.Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

#include<stdio.h>
int climbStairs(int n){
    if(n<=2 && n>=0){
        return n;
    }
    int prev1=1;
    int prev2=2;
    int ans=0;
    for(int i=3;i<=n;i++){
        ans=prev1+prev2;
        prev1=prev2;
        prev2=ans;
    }
    return ans;
}