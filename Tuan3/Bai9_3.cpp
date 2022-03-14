#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string text;
    getline(cin, text);
    int countStartSpaces = 0;
    for (int i = 0; i < text.length(); i++ ) {
        if (text[i] == ' ') countStartSpaces++;
        else break;
    }
    for (int i = 1; i <= countStartSpaces; i++) {
        cout << " ";
    }
    for (int i = countStartSpaces; i < text.length(); i++ ) {
        if (text[i] == ' ' && text[i-1] == ' ') continue;
        else cout << text[i];
    }
    return 0;
}
