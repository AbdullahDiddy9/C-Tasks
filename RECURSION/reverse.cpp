#include <iostream>
using namespace std;

int reverseNum(int i, int result = 0){

    if(i == 0){
        return result;
    }

    return reverseNum(i / 10, i % 10 + result * 10);
}

int main(){

    int x;

    cout << "Number likho: ";
    cin >> x;

    int result = reverseNum(x);

    cout << "Reverse = " << result;
}