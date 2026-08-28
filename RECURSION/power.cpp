#include <iostream>
using namespace std;

int power(int i, int n){

    if(n == 0){
        return 1;
    }

    return i * power(i, n - 1);
}

int main(){

    int x, p;

    cout << "Number: ";
    cin >> x;

    cout << "Power: ";
    cin >> p;

    int result = power(x, p);

    cout << "Answer = " << result;
}