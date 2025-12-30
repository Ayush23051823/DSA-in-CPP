//Hashing characters in a string
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "abbccc";
    int hash[26]={0};
    for(char c:s){
        hash[c-'a']++;
    }
    for(int i=0;i<26;i++){
        if(hash[i]>0)
           cout<<char(i+'a')<<"->"<<hash[i]<<"times\n";
    }
}