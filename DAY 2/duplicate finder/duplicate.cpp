#include <iostream>
using namespace std;

void duplicatefinder(int arr[], int size){
    int count=0;
    for (int i=0 ; i<size ; i++){
        for (int j=i+1 ; j<size ; j++){
             if (arr[i]==arr[j]){
                count = arr[j];
            }
        }
    }
    cout << "\nduplicate: "<< count << " ";
    cout << "\nindex: ";

    for (int i=0 ; i<size;i++){
        if (arr[i]==count){
            cout << i << " ";
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
