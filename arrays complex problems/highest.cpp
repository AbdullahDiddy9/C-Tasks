#include <iostream>
using namespace std;

int main() 
{
    int largest = 0;
    int num1, num2;

    int a[] = {1,3,5,2,8,3,4,9};
    int b[] = {7,5,2,2,5,9};

    int size = sizeof(a)/sizeof(a[0]);

    // a + a
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            
            if (i!=j){

            int sum = a[i] + a[j];

            if (sum > largest) {
                largest = sum;
                num1 = a[i];
                num2 = a[j];
            }
            }
        }
    }

    int l1 = 0;
    int num3, num4;

    // a + b
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {

            int sum = a[i] + b[j];

            if (sum > l1) {
                l1 = sum;
                num3 = a[i];
                num4 = b[j];
            }
        }
    }

    int l2 = 0;
    int num5, num6;

    // b + b
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {

            if (i != j) {
                int sum = b[i] + b[j];

                if (sum > l2) {
                    l2 = sum;
                    num5 = b[i];
                    num6 = b[j];
                }
            }
        }
    }
    
    if (largest > l1 && largest > l2) {
        cout << num1 << " + " << num2 << " = " << largest << endl;
    }
    else if (l1 > l2 && l1 > largest) {
        cout << num3 << " + " << num4 << " = " << l1 << endl;
    }
    else {
        cout << num5 << " + " << num6 << " = " << l2 << endl;
    }
}