#include <iostream>
using namespace std;

void secondrydiagonal (int arr[][4],int n , int m){
    int secdiagonal = 0;
    
    for (int i = 0 ; i<n;i++){
        for (int j = 0 ; j< m ; j++){
            if (j == n-1-i){
                secdiagonal = secdiagonal+ arr[i][j];
            }
        }
    }
    cout << "secondary diagonal sum is: "<< secdiagonal<< endl;
}

void diagonal (int arr[][4],int n , int m){
    int diagonal = 0;
    
    for (int i = 0 ; i<n;i++){
        for (int j = 0 ; j< m ; j++){
            if (i ==j){
                diagonal = diagonal+ arr[i][j];
            }
        }
    }
    cout << "diagonal sum is: "<< diagonal<< endl;
}

void summatrix(int arr[][4], int n , int m){
    int sum = 0;
    for (int i = 0 ; i<n;i++){
        for (int j = 0 ; j< m ; j++){
            sum = sum + arr[i][j];
        }
    }
    cout << "sum is : "<< sum << endl;
}

void smallest(int arr[][4], int n , int m){
    int smallest = arr[0][0];
    for (int i=0;i<n;i++){
        for (int j=0 ; j<m ; j++){
            if (smallest > arr[i][j]){
                smallest = arr[i][j];
            }
        }
    }
    cout << "smallest is: "<< smallest << endl;
    
}

void largest (int arr[][4],int n , int m){
    int largest = arr[0][0];
    for (int i=0;i<n;i++){
        for (int j=0 ; j<m ; j++){
            if (largest < arr[i][j]){
                largest = arr[i][j];
            }
        }
    }
    cout << "largest is: "<< largest << endl;
}

int main(){
    int n;
    cout << "kitny rows: " << endl;
    cin>> n;
    int arr[n][4];
    for (int i =0 ; i<n;i++){
        for (int j=0; j<4;j++){
            cin >> arr[i][j];
        }
        
    }
    cout << "the matrix is as: "<<endl;
    for (int i =0 ; i<n;i++){
        for (int j=0; j<4;j++){
            cout << arr[i][j] << " " ;
        }
        cout <<endl;
    }
    largest (arr , n,4);
    smallest(arr, n,4);
    summatrix (arr,n , 4);
    diagonal(arr,n,4);
    secondrydiagonal(arr,n,4);
}
