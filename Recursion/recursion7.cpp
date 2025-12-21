//Sum of first N numbers using Backtracking

#include<iostream>
using namespace std;

int sumBacktrack(int n){
    if (n==0)
        return 0;
    int smallsum = sumBacktrack(n-1);
    return smallsum + n;
}

int main(){
    int n;
    cout<<"Enter N:";
    cin>> n;
    cout<<"Sum="<<sumBacktrack(n);
    return 0;
}