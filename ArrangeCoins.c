//ques : You have n coins and you want to build a staircase with these coins. The staircase consists of k rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.Given the integer n, return the number of complete rows of the staircase you will build.

#include<stdio.h>
int arrangeCoins(int n){
    long long coins=n;
    int row=1;
    while(coins>=row){
        coins-=row;
        row++;
    }return row-1;
}