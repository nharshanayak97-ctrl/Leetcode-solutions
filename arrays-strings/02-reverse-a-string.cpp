#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverseString(vector<char>& s) {
    reverse(s.begin(), s.end());
}

int main() {

    // Test Case 1
    vector<char> s1 = {'h', 'e', 'l', 'l', 'o'};

    reverseString(s1);

    cout << "Test Case 1: ";

    for (char c : s1) {
        cout << c;
    }

    cout << endl;


    // Test Case 2
    vector<char> s2 = {'H'};

    reverseString(s2);

    cout << "Test Case 2: ";

    for (char c : s2) {
        cout << c;
    }

    cout << endl;

    return 0;
}