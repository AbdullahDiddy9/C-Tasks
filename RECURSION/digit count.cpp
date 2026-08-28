#include <iostream>
using namespace std;

int count(int i){

    if(i == 0){
        return 0;
    }

    return 1 + count(i / 10);
}

int main(){

    int x;

    cout << "Number likho: ";
    cin >> x;

    int result = count(x);

    cout << "Digits = " << result;
}