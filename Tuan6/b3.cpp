#include <iostream>
using namespace std;

struct Student {
    int no;
    string name;
    int age;
    string address;
    double mark;
};

int main() {
    Student a[5];
    for (int i = 1; i <= 5; i++ ) {
        cin >> a[i].no >> a[i].name >> a[i].age >> a[i].address >> a[i].mark;
    }
    for (int i = 1; i <= 5; i++ ) {
        cout << a[i].no << " " << a[i].name << " " << a[i].age << " " << a[i].address << " " << a[i].mark << endl;
    }
    return 0;
}
