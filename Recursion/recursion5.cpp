//Print N to 1 using Backtracking
#include<iostream>
using namespace std;

 void printReverseBacktrack(int i,int n){
    if(i>n)
        return;
    printReverseBacktrack(i+1,n);
    cout<<i<<" ";
 }
    int main(){
        int n;
        cout<<"Enter N:";
        cin>>n;
        printReverseBacktrack(1,n);
        return 0;
    }