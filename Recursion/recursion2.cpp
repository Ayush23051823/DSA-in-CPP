#include<iostream>
using namespace std;

void printLinear(int i, int n){
    if(i>n)
        return;
    cout<<i<<endl;
    printLinear(i+1,n);
}

int main (){
    int n;
    cout<<"Enter N:";
    cin>>n;
    printLinear(1,n);
    return 0;
}