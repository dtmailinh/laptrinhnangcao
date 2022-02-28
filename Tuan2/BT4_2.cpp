#include <iostream>
using namespace std;

int main() {
    int total, totallegs;
    bool check = false;
    int i;
    cin >> total >> totallegs;
    for ( i = 1; i <= total; ++i) {
        if ((2 * i + (total - i) * 4) == totallegs) {
            check = true;
            break;
        }
    } 
    if (check == true) cout << "chicken = " << i << ", dog = " << total - i;
    else cout << "invalid";
    return 0;
}