#include <iostream>
using namespace std;

struct Student {
    int no;
    string name;
    int age;
    //double mark;
};

void nhapmang(Student Person[]) {
    for (int i = 1; i <= 5; i++ ) {
        cin >> Person[i].no >> Person[i].name >> Person[i].age;
    }
}

int main() {
    Student Person[5];
    nhapmang(Person);
    cout << Person[2].no << " " << Person[2].name << " " << Person[2].age;
    return 0;
}
