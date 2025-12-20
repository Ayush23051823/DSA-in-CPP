//Print Linearly from 1 to N but by backtracking
#include<iostream>
using namespace std;

void printLinearBacktrack(int n){
    if (n==0)
        return;

    printLinearBacktrack(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cout<<"Enter N:";
    cin>>n;
    printLinearBacktrack(n);
    return 0;
}   