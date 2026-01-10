//Find the first element whose frequency is exactly K
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
        mp[arr[i]]++;

    for (int i = 0; i < n; i++) {
        if (mp[arr[i]] == k) {
            cout << arr[i];
            return 0;
        }
    }

    cout << -1;   
    return 0;
}
