//Reverse string using recursion
#include <iostream>
using namespace std;

string reverseString(string s) {
    // Base case
    if (s.length() == 0)
        return "";

    // Recursive case
    return reverseString(s.substr(1)) + s[0];
}

int main() {
    string str = "hello";
    cout << reverseString(str);
    return 0;
}
