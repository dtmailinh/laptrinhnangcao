#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;
    int x = 2 * n + 1;
    for (int i = 1; i <= x; i++ ) {
        for (int j = 1; j <= x; j++ ) {
            if (j == i || (i + j) == x + 1) cout << "* ";
            else cout << ". ";
        }
        cout << endl;
    }
    return 0;
}