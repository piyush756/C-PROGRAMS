//ques:You are given an array prices where prices[i] is the price of a given stock on the ith day.You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0
#include<stdio.h>
int maxProfit(int* prices, int pricesSize){
    if(pricesSize==0){
        return 0;
    }
    int max_profit=0;
    int min_price=prices[0];
    for(int i=1;i<pricesSize;i++){
        if(prices[i]<min_price){
            min_price=prices[i];
        }else{
            int cur_profit=prices[i]-min_price;
            if(cur_profit>max_profit){
                max_profit=cur_profit;
            }
        }
    }return max_profit;
}