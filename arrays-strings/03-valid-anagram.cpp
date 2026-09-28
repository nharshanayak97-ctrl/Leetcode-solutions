#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isAnagram(string s, string t) {

    if (s.length() != t.length()) {
        return false;
    }

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    return s == t;
}

int main() {

    // Test Case 1
    cout << "Test Case 1: ";

    if (isAnagram("anagram", "nagaram")) {
        cout << "true";
    } else {
        cout << "false";
    }

    cout << endl;

    // Test Case 2
    cout << "Test Case 2: ";

    if (isAnagram("rat", "car")) {
        cout << "true";
    } else {
        cout << "false";
    }

    cout << endl;

    return 0;
}