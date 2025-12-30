//Check if an element is present in an array using hashing
#include<iostream>
using namespace std;

int main(){
    int arr[]={5,3,9,1,3};
    int n=5;

    int hash[10]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    int x=9;
    if(hash[x]>0)
       cout<<"Foud";
    else
       cout<<"Not Found";
    return 0;
}