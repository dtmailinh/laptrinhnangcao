#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s;
    int countSpaces = 0;
    
    getline(cin, s);
    for(int i = 0; i < s.length(); i++ ) {
        if (s[i] != ' ' && s[i+1] == ' ') countSpaces++;
    }
    countSpaces++;
    cout << countSpaces;
    return 0;
    
}