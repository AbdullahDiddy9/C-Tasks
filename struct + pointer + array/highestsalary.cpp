#include <iostream>
using namespace std;

struct Emp {
    string name;
    int age;
    int salary;
};

int main() {

    Emp e1, e2, e3;

    e1.name = "Ali";
    e1.age = 30;

    e2.name = "Abdullah";
    e2.age = 25;

    e3.name = "Ronaldo";
    e3.age = 41;

    cout << "Enter salary of e1: ";
    cin >> e1.salary;

    cout << "Enter salary of e2: ";
    cin >> e2.salary;

    cout << "Enter salary of e3: ";
    cin >> e3.salary;

    Emp arr[] = {e1, e2, e3};

    Emp* ptr = arr;

    int largest = 0;

    for (int i = 1; i < 3; i++) {

        if (ptr[i].salary > ptr[largest].salary) {
            largest = i;
        }
    }

    cout << ptr[largest].name
         << " has the highest salary" << endl;
}