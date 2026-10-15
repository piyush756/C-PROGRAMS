//ques: Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.
#include<stdio.h>
int firstUniqChar(char* s){
    int freq[26]={0};
    for(int i=0;s[i]!='\0';i++){
        freq[s[i]-'a']++;
    }
    for(int i=0;s[i]!='\0';i++){
        if(freq[s[i]-'a'] ==1){
            return i;
        }
    }return -1;
}
