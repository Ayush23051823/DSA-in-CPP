//Factorial of a number using recursion using Backtracking
#include<iostream>
using namespace std;

int factorial(int n){
    if (n==0)
        return 1;
    int smallFact=factorial(n-1);
    return n * smallFact;
}

int main(){
    int n;
    cout<<"Enter N:";
    cin>>n;
    cout<<"factorial="<<factorial(n);
    return 0;
}