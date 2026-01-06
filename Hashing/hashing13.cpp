//Check if all the elements are unique in the array
#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int arr[]={1,2,3,4};
    int n =4;

    unordered_map<int, int>mp;

    for(int i=0; i<n; i++){
        if(mp[arr[i]]>0){
            cout<< "NO";
            return 0;
        }
        mp[arr[i]]++;
    }
    cout<<"Yes";
    return 0;
}