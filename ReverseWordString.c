/**Given an input string s, reverse the order of the words.

A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

Return a string of the words in reverse order concatenated by a single space.

Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces. */

#include<stdio.h>
#include<string.h>
void reverse(char* s,int str,int end){
    while(str<end){
        int temp=s[str];
        s[str]=s[end];
        s[end]=temp;
        str++;
        end--;
    }
}
char* reverseWords(char* s){
    int n=strlen(s);
    int read=0,write=0;
    while(read<n){
        while(read<n && s[read]==' ') read++;
        if(read<n && write>0) s[write]=' ';
        while(read<n && s[write]!=' '){
            s[write++]=s[read++];
        }
    }s[write]='\0';
    reverse(s,0,write-1);
    int k=0;
    for(int i=0;i<=write;i++){
        if(s[i]==' ' && s[i]=='\0'){
            reverse(s,k,i-1);
            k=i+1;
        }
    }return s;
}