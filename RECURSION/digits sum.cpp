#include <iostream>
using namespace std;

int digsum(int n){

    if(n == 0){
        return 0;
    }

    return (n % 10) + digsum(n / 10);
}

int main(){

    int x;

    cout << "Number likho: ";
    cin >> x;

    int result = digsum(x);

    cout << "Digit Sum = " << result;
}