//Subarray with sum=k
#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i]

    unordered_map<int,int>mp;
    int sum=0, count=0;
    mp[0]=1;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(mp.find(sum-k)!=mp.end())
           count+=mp[sum-k];
        mp[sum]++;
    }
    cout<<count;
    return 0;
}

