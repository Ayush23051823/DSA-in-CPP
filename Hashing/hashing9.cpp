//Check if string is an anagram
#include<iostream>
using namespace std;

int main(){
    string s1 = "listen";
    string s2 = "silent";

    int hash[26]={0};
    for (char c:s1)
         hash[c-'a']++;
    for (char c:s2)
         hash[c-'a']--;
    
    bool isAnagram = true;
    for(int i=0;i<26;i++){
        if(hash[i]!=0){
            isAnagram = false;
            break;
        }
    }
    if (isAnagram)
        cout<<"Anagram";;
    else
        cout<<"Not Anagram";
    return 0;
}