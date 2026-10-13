//ques : Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

#include<stdio.h>
int addDigits(int num){
    int sum=num;
    while(sum>=10){
        sum=(sum%10)+(sum/10);
    }
    return sum;
}