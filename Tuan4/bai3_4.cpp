void printArrow(int n, bool left) {
    int d = n;
    if (left == 0) {
        for (int i = 0; i < n; i++ ) {
            for (int j = 1; j <= 2*i;j++ ) {
                cout << " ";
                //Sleep(500);
            }
            for (int j = 1; j <= (n-i); j++ ) {
                cout << "*";
                //Sleep(500);
            }
            cout << endl;
        }
         for (int i = n-2; i >= 0; i-- ) {
            for (int j = 1; j <= 2*i;j++ ) {
                cout << " ";
                //Sleep(500);
            }
            for (int j = 1; j <= (n-i); j++ ) {
                cout << "*";
                //Sleep(500);
            }
            cout << endl;
         }
    }
    else {
        for (int i = 0; i < n; i++ ) {
            for (int j = 1; j <= (n-i-1);j++ ) {
                cout << " ";
                //Sleep(500);
            }
            for (int j = 1; j <= (n-i); j++ ) {
                cout << "*";
                //Sleep(500);
            }
            cout << endl;
        }

        for (int i = n-2; i >= 0; i-- ) {
            for (int j = 1; j <= (n-i-1);j++ ) {
                cout << " ";
                //Sleep(500);
            }
            for (int j = 1; j <= (n-i); j++ ) {
                cout << "*";
                //Sleep(500);
            }
            cout << endl;
         }
    }
}