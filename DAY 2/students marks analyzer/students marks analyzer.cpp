#include <iostream>
using namespace std;

void findhighest(int arr[] , int size){
    int largest = arr[0];
    int index = 0;
    for (int i=0 ; i < size ; i++){
        for (int j=i; j<size ; j++){
            if (arr[i]<arr[j]){
                largest = arr[j];
            }
            
        }
    }
    cout << "\nlargest: "<<largest << endl;
    cout << "index : ";
//for indexes
    for (int i =0 ; i<size ; i++){
        if (arr[i]==largest){
            cout << i << " ";
        }
    }

}

void findsmallest (int arr[] , int size){
    int smallest = arr[0];
    for (int i=0 ; i<size ; i++){
        for (int j =i ; j<size ; j++){
            if (arr[i]>arr[j]){
                smallest = arr[j];
            }
        }
    }
    cout << "\nsmallest: " << smallest<<endl;
}

double average(int arr[],int size){
    int sum;
    for (int i=0;i<size;i++){
        sum = sum + arr[i];
    }
    return (double) sum / size;
}

int main() 
{
    int n;
    cout << "kitnay bachon kay numbers add kerne? "<<endl;
    cin>> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cout << "Enter number of students: "<<endl;
        cin>> arr[i];
    }
    for (int i = 0 ; i<n ; i++){
        cout<< arr[i] <<" ";
    }
    findhighest(arr,n);
    findsmallest(arr,n);
    average(arr,n);
} 
