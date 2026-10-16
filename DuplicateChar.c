//ques :We define the usage of capitals in a word to be right when one of the following cases holds:

//All letters in this word are capitals, like "USA".
//All letters in this word are not capitals, like "leetcode".
//Only the first letter in this word is capital, like "Google".
//Given a string word, return true if the usage of capitals in it is right.

#include<stdio.h>
#include<stdbool.h>
#include<string.h>
bool detectCapitalUse(char* word){
    int size = strln(word);
    int isupper=1;
    for(int i=0;i<size;i++){
        if(word[i]>='a' && word[i]<='z'){
            isupper=0;
            break;
        }
    }if(isupper){
        return true;
    }
    int islower=1;
    for(int i=0;i<size;i++){
        if(word[i]>='A' && word[i]<='Z'){
            islower=0;
            break;
        }
    }if(islower){
        return true;
    }

    if(word[0]>='A' && word[0]<='Z'){
        for(int i=1;i<size;i++){
            if(word[i]>='A' && word[i]<='Z'){
                return false;
            }
        }return true;
    }return false;
}