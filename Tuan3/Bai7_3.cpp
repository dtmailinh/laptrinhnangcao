#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s;
    int countAlpha = 0, countDigit = 0, countOther = 0;
    
    getline(cin, s);
    for (int i = 0; i < s.length(); i++ ) {
        if (isalpha(s[i])) countAlpha++;
        else if (isdigit(s[i])) countDigit++;
        else countOther++;
    }
    //countOther = s.length() - countAlpha - countDigit;
    cout << countAlpha << " " << countDigit << " " << countOther;
    return 0;
}