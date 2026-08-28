#include <iostream>
using namespace std;

void even(int i, int n){

    if(i > n){
        return;
    }

    if(i % 2 == 0){
        cout << i << endl;
    }

    even(i + 1, n);
}

int main(){

    int x = 1, y;

    cout << "Kahan tak karna hai: ";
    cin >> y;

    even(x, y);
}