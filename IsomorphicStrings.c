//ques: Given two strings s and t, determine if they are isomorphic.

//Two strings s and t are isomorphic if the characters in s can be replaced to get t.

//All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

#include<stdio.h>
#include<stdbool.h>
bool isIsomorphic(char* s, char* t){
    int mapS[256]={0};
    int mapT[256]={0};
    for(int i=0;s[i]='\0';i++){
        char a=s[i];
        char b=t[i];
        if(mapS[a]!=mapT[b]){
            return false;
        }
        mapS[a]=i+1;
        mapT[b]=i+1;
    }return true;
    
}