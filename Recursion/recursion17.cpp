//Print all subsequences of a string
#include<iostream>
using namespace std;

void subsequence(string s, string ans, int i){
    if(i==s.length()){
        cout<< ans <<endl;
        return;
    }

    subsequence(s, ans, i+1);
    subsequence(s, ans + s[i], i+1);
}

int main(){
    string s;
    cin >> s;

    subsequence(s,"",0);
    return 0;
}