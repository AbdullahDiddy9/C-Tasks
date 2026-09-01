#include <iostream>
using namespace std;

void Rounds( char arr[3][3], int moves){
    int row ,col;
    // player X se row or column lena
    cout << "Player X ki bari "<<endl;
    cout << "column: "<<endl;
    cin>>col;
    cout << "Row: "<<endl;
    cin>>row;
    if(row < 1 || row > 3 || col < 1 || col > 3){
    cout << "Invalid position";
    return;
}

    if(arr[row-1][col-1] != ' '){
    cout << "Position already occupied";
    return;
}

    arr [row-1][col-1]= 'X';


// board print
    for (int i=0 ; i<3 ;i++){
        for (int j = 0 ; j<3 ; j++){
            cout << arr[i][j];
            if (j<2){
                cout << " | ";
            }
        }
         cout << endl; 
        if (i < 2){
            cout << "--+---+--"<<endl;
        }
    }

// win check
 if (
    (arr[row-1][0] == 'X' &&
     arr[row-1][1] == 'X' &&
     arr[row-1][2] == 'X')

    ||

    (arr[0][col-1] == 'X' &&
     arr[1][col-1] == 'X' &&
     arr[2][col-1] == 'X')

    ||

    (arr[0][0] == 'X' &&
     arr[1][1] == 'X' &&
     arr[2][2] == 'X')

    ||

    (arr[0][2] == 'X' &&
     arr[1][1] == 'X' &&
     arr[2][0] == 'X')
)
{
    cout << "Player X wins :D" << endl;
    return;
}
moves++;
if(moves == 9){
    cout << "Match is draw";
    return;
}

// player O se row or column lena
    cout << "Player O ki bari "<<endl;
    cout << "column: "<<endl;
    cin>>col;
    cout << "Row: "<<endl;
    cin>>row;
    if(row < 1 || row > 3 || col < 1 || col > 3){
    cout << "Invalid position";
    return;
}
    if(arr[row-1][col-1] != ' '){
    cout << "Position already occupied";
    return;
}

    arr [row-1][col-1]= 'O';

// board print
    for (int i=0 ; i<3 ;i++){
        for (int j = 0 ; j<3 ; j++){
            cout << arr[i][j];
            if (j<2){
                cout << " | ";
            }
        }
         cout << endl; 
        if (i < 2){
            cout << "--+---+--"<<endl;
        }
    }

    // win check
 if (
    (arr[row-1][0] == 'O' &&
     arr[row-1][1] == 'O' &&
     arr[row-1][2] == 'O')

    ||

    (arr[0][col-1] == 'O' &&
     arr[1][col-1] == 'O' &&
     arr[2][col-1] == 'O')

    ||

    (arr[0][0] == 'O' &&
     arr[1][1] == 'O' &&
     arr[2][2] == 'O')

    ||

    (arr[0][2] == 'O' &&
     arr[1][1] == 'O' &&
     arr[2][0] == 'O')
)
{
    cout << "Player O wins :D" << endl;
    return;
}
moves++;
//draw codition
    if (moves==9){
        cout << "Match is draw"<<endl;
        return;
    }

//
    
    Rounds(arr,moves);

    
}

int main() 
{
    int n=0;
    char board [3][3]={
        {' ',' ',' '},
        {' ',' ',' '},
        {' ',' ',' '}
    };

// board print
    for (int i=0 ; i<3 ;i++){
        for (int j = 0 ; j<3 ; j++){
            cout << board[i][j];
            if (j<2){
                cout << " | ";
            }
        }
         cout << endl; 
        if (i < 2){
            cout << "--+---+--"<<endl;
        }
    }
    
    Rounds(board,n);
}
    