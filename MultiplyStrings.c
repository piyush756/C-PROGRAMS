//ques : Given two non-negative integers num1 and num2 represented as strings, return the product of num1 and num2, also represented as a string.
//Note: You must not use any built-in BigInteger library or convert the inputs to integer directly.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* multiply(char* num1, char* num2){
    if(num1[0]==0 || num2[0]==0) return "0";
    int len1=strlen(num1);
    int len2=strlen(num2);
    int* result=(int*)calloc(len1+len2,sizeof(int));
    for(int i=len1-1;i>=0;i--){
        for(int j=len2-1;j>=0;j--){
            int mul=(num1[i]-'0')*(num2[j]-'0');
            int sum=mul+result[i+j+1];
            result[i+j+1]+=sum/10;
            result[i+j]=sum%10;
        }
    }int i=0,k=0;
    char* str_result=(char*)malloc((len1+len2+1)*sizeof(char));
    while(i<len1+len2 && result[i]==0){
        i++;
    }while(i<len1+len2){
        str_result[k++]=result[i++]+'0';
    }str_result[k]='\0';
    free(result);
    return str_result;
}