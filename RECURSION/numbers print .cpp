#include <iostream>
using namespace std;

void numprint(int i, int n){

    if(i > n){
        return;
    }

    cout << i << endl;
    numprint(i + 1, n);
}

int main(){

    int x, y;

    cout << "Kahan se shuru: ";
    cin >> x;

    cout << "Kahan tak: ";
    cin >> y;

    numprint(x, y);
}