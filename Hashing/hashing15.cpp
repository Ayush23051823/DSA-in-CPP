//Count how many numbers are even-frequency
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {1, 1, 2, 2, 2, 3};
    int n = 6;

    unordered_map<int, int> mp;

    for (int x : arr)
        mp[x]++;

    int count = 0;
    for (auto it : mp) {
        if (it.second % 2 == 0)
            count++;
    }

    cout << count;
    return 0;
}
