#include <iostream>
using namespace std;

void duplicatefinder(int arr[], int size){
    cout << "\nduplicates: ";
    for (int i=0 ; i<size ; i++){
        for (int j=i+1 ; j<size ; j++){
             if (arr[i]==arr[j]){
                cout << arr[i] << " " <<endl;
                cout << "indexes: " << i << ", "<<j <<endl;
            }
        }
    }
}

int main(){
    int n;
    cout << "kitny numbers insert kerne: "<<endl;
    cin>> n;
    int arr[n];
    cout << "insert numbers: " << endl;
    for (int i =0 ; i<n ; i++){
        cin >> arr[i];
    }
    cout << "total numbers are: ";
    for (int i=0 ; i<n; i++){
        cout << arr[i]<< " ";
    }

    duplicatefinder(arr,n);

}