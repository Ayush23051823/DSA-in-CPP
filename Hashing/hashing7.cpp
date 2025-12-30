//Count vowels in a string using hashing
#include<iostream>
using namespace std;

int main(){
    string s="education";
    int hash[26]={o};
    for(char c:s)
        hash[c-'a']++;
    int count = 0;

    count+=hash['a'-'a'];
    count+=hash['e'-'a'];
    count+=hash['i'-'a'];
    count+=hash['o'-'a'];
    count+=hash['u'-'a'];
    cout<<count;
    return 0;
}