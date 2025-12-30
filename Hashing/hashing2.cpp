//Hashing using unorderded_map
#include<iostream>
#include<unordered_mp>
using namespace std;

int main(){
    int arr[]={1,2,1,3,2,1}
    int n=6;

    unordered_mp<int,int>mp;

    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    for(auto it:mp){
        cout<<it.first<<"->"<<it.second<<"times\n";
    }

    return 0;
}