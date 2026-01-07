//Find the element that appears only once
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 3};
    int n = 5;

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
        mp[arr[i]]++;

    for (auto it : mp) {
        if (it.second == 1) {
            cout << it.first;
            break;
        }
    }
    return 0;
}
