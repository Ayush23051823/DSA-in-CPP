//Two Sum(Very Important)
#include<iostream>
#include<unordered_mp>
using namespace std;

int main(){
    int arr[]={2,7,11,15};
    int n=4;
    int target=9;

    unordered_map<int,int>mp;
    for(int i=0:i<n;i++){
        int need=target-arr[i];
    if(mp[need]>0){
        cout<<"True";
        return o;
    }
    mp[arr[i]]++;
}
    cout<<"False";
    return 0;
}