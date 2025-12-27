//Count subset with sum K
#include <iostream>
using namespace std;

int countSubsets(int arr[], int n, int k){
    if (n==0)
        return (k==0);
    int notTake = countSubsets(arr, n-1, k);
    int take = 0;

    if (arr[n-1]<=k)
        take = countSubsets(arr, n-1, k - arr[n-1]);
    return notTake + take;
}
int main(){
    int n, k;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++)
        cin>>arr[i];
    cin>>k;
    cout<<countSubsets(arr, n, k);
    return 0;
}