#include <iostream>
using namespace std;

void passcheck(string n){

    string special = "!@#$%^&*|<>/?~";

    bool uppercase = false;
    bool lowercase = false;
    bool digit = false;
    bool specialcharacter = false;

    for (int i = 0; i < n.length(); i++){

        if (n[i] >= 'A' && n[i] <= 'Z'){
            uppercase = true;
        }

        else if (n[i] >= 'a' && n[i] <= 'z'){
            lowercase = true;
        }

        else if (n[i] >= '0' && n[i] <= '9'){
            digit = true;
        }

        else if (special.find(n[i]) != string::npos){
            specialcharacter = true;
        }
    }

    int score = 0;

    if (n.length() >= 8){
        score++;
    }

    if (uppercase){
        score++;
    }

    if (lowercase){
        score++;
    }

    if (digit){
        score++;
    }

    if (specialcharacter){
        score++;
    }

    cout << "\nPassword strength: " << endl;

    if (score == 0){
        cout << "TOO WEAKK, koi bhi hack kerlega" << endl;
    }
    else if (score <= 2){
        cout << "WEAK" << endl;
    }
    else if (score <= 4){
        cout << "MEDIUM" << endl;
    }
    else {
        cout << "STRONGESTT" << endl;
    }
}

int main()
{
    string pass;

    cout << "Enter Password: " << endl;
    cin >> pass;

    if (pass.length() < 8){
        cout << "Must be at least 8 characters" << endl;
    }

    passcheck(pass);
}