//Check if an array contains any element that appears exactly once
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    unordered_map<int, int> mp;

    // Step 1: Count frequency
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;

    // Step 2: Check if any element has frequency 1
    for (auto it : mp) {
        if (it.second == 1) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
