#include <iostream>
using namespace std;

struct Student {
    int no;
    string name;
    int age;
    double mark;
};

int main() {
    Student Person;
    cin >> Person.no >> Person.name >> Person.age >> Person.mark;
    cout << Person.no << " " << Person.name << " " << Person.age << " " << Person.mark;
    return 0;
}
