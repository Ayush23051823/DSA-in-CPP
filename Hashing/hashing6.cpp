//Check if two arrays are equal using hashing
#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int A[]={1,2,3};
    int B[]={3,2,1};
    int n=3;

    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
        mp[A[i]]++;
    for(int i=0;i<n;i++)
        mp[B[i]]--;
    bool equal=true;
    for (auto it : mp){
        if(it.second!=0){
            equal=false;
            break;
        }
    }
    if(equal)
       cout<<"Equal";
    else
       cout<<"Not Equal";
    return 0;

}

