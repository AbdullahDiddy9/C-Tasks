#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    int guess,count=0;
    srand(time(0));
    int n = rand()%100+1;
    cout << "Total Turns are: 5" <<endl;
    do{
    cout << "Guess kero: "<<endl;
    cin >> guess;
    if (guess==n){
        cout << "MATCHED "<<endl;
        break;
    }
    else if (guess>=n-5 && guess<=n+5){
        cout<< "CLOSE "<<endl;
        
    }
    else if (guess<n){
        cout<< "TO LOWW "<<endl;
        
    }
    else
    cout << "TO HIGHH" << endl;
        count ++;
    
    }
    while (guess != n && count < 5);
    
    cout << "guessed number was: " << n << endl;
    if (guess == n){
        cout << "CONGRATULATIONS AND CELEBRATIONS "<<endl;
    }
    else
    cout << "LOSERR :'D"<<endl;
} 
