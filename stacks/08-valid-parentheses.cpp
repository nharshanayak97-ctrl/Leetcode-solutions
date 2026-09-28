#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {

    stack<char> st;

    for (char c : s) {

        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        }

        else {

            if (st.empty()) {
                return false;
            }

            char top = st.top();
            st.pop();

            if (c == ')' && top != '(') {
                return false;
            }

            if (c == '}' && top != '{') {
                return false;
            }

            if (c == ']' && top != '[') {
                return false;
            }
        }
    }

    return st.empty();
}

int main() {

    // Test Case 1
    cout << "Test Case 1: ";

    if (isValid("()[]{}")) {
        cout << "true";
    } else {
        cout << "false";
    }

    cout << endl;

    // Test Case 2
    cout << "Test Case 2: ";

    if (isValid("(]")) {
        cout << "true";
    } else {
        cout << "false";
    }

    cout << endl;

    return 0;
}