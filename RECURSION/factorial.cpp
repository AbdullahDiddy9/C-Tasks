#include <iostream>
using namespace std;

int fact(int i){

    if(i == 0){
        return 1;
    }

    return i * fact(i - 1);
}

int main(){

    int x;

    cout << "Kiska factorial nikalna hai: ";
    cin >> x;

    int result = fact(x);

    cout << "Factorial = " << result;
}