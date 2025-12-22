//Check the given string is palindrome or not using one Index
#include<iostream>
using namespace std;

bool isPalindrome(string s, int i){
    if(i>s.length/2)
       return true;
    if(s[i]!=s[s.length()-i-1])
       return false;
}

int main(){
    string s;
    cin>> s;
    if (isPalindrome(s,0))
       cout<<"Palindrome";
    else
       cout<<"Not a Palindrome";
    return 0;
}