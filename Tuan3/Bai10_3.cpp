#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s.length() < 6 || s.length() > 15) {
        cout << "Invalid username.";
        return 0;
    }
    if (s[0] >= '0' && s[0] <= '9' )  {
        cout << "Invalid username.";
        return 0;
    }
    for (int i = 0; i < s.length(); i++ ) {
        //if (!((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')))
        if (!isalpha(s[i]) && !isdigit(s[i])) {
        cout << "Invalid username.";
        return 0;
    }
    }
    cout << "Valid username.";
    return 0;
}