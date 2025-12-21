//Factorial of a number using recursion 

#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0)
       return 1;
    return n * factorial(n-1);
}
int main(){
    int n;
    cout<<"Enter N:";
    cin>> n;
    cou<<"Factorial is:"<< factorial(n);
    return 0;
}