//Check if two arrays share any common element
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 2};
    int n = 3;

    unordered_map<int, bool> mp;

    for (int i = 0; i < n; i++)
        mp[a[i]] = true;

    for (int i = 0; i < n; i++) {
        if (mp[b[i]]) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
