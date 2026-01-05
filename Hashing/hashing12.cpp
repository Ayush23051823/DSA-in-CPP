//Find the element with minimum frequency

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {1, 1, 2, 2, 2, 3};
    int n = 6;

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
        mp[arr[i]]++;

    int minFreq = n, ans = -1;

    for (auto it : mp) {
        if (it.second < minFreq) {
            minFreq = it.second;
            ans = it.first;
        }
    }

    cout << ans;
    return 0;
}
