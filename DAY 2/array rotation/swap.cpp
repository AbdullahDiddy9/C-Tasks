#include <iostream>
using namespace std;

void rotate(int arr[],int size){
    int x;
    cout << "\nkitny numbers rotate kerney: "<<endl;
    cin >>x;
    if (x<=size){
        for (int k=0;k<x;k++){
        int temp = arr[size-1];
        for (int i=size -1 ; i>0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
        }
        
    }
    else 
    cout << "ERROR" << endl;
   
}

int main(){
    int n;
    cout << "kitny numbers insert kerney: "<<endl;
    cin >> n;
    int arr[n];
    cout << "kero!! "<<endl;
    for (int i=0;i<n;i++){
        cin>> arr[i];
    }
    cout << "numbers are: ";
    for (int i=0 ; i<n ; i++){
        cout << arr[i]<< " ";
    }

    rotate(arr,n);
    cout << "\nafter rotation: ";
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    
}
