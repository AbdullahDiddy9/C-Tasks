#include <iostream>
using namespace std;

int findsum(int i, int n){

    if(i > n){
        return 0;
    }

    return i + findsum(i + 1, n);
}

int main(){

    int x, y;

    cout << "Pehla number: ";
    cin >> x;

    cout << "Akhri number: ";
    cin >> y;

    int sum = findsum(x, y);

    cout << "Sum = " << sum;
}