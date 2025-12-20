//Print N to 1 using recursion
#include<iostream>
using namespace std;
 void printReverse(int n){
    if(n==0)
        return;
    cout<<n<<endl;
    printReverse(n-1);
 }
    int main(){
        int n;
        cout<<"Enter N:";
        cin>>n;
        printReverse(n);
        return 0;
    }