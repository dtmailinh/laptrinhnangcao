#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>a(n);
    bool check = true;
    
    for (int i = 0; i < n; i++ ) {
        cin >> a[i];
    }
    for (int i = 0; i < n/2; i++ ) {
        if (a[i] != a[n - 1 - i]) {
            check = false;
            cout << "Asymmetric array.";
            return 0;
        }
    }
    cout << "Symmetric array.";
    return 0;
    
}