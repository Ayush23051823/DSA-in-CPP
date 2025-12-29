//Hashing using array
#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,1,3,2,1};
    int n=6;

    int hash [10]={0};
    for(int i=0; i<=n; i++){
        hash[arr[i]]++;
    }

    for(int i=0; i<=0; i++){
        if(hash[i]>0)
           cout<<i<<"->"<<hash[i]<<"times\n";
    }

    return 0;
}