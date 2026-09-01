Password Strength Checker
============================

A program that checks a password entered by the user and rates its
strength based on a few common rules.

How it works (passcheck() function):
---------------------------------------
- Takes the password string as input.
- Defines a string of allowed special characters: !@#$%^&*|<>/?~
- Loops through every character of the password and checks:
  - Is it an uppercase letter (A-Z)?      -> sets uppercase = true
  - Is it a lowercase letter (a-z)?       -> sets lowercase = true
  - Is it a digit (0-9)?                  -> sets digit = true
  - Is it one of the special characters?  -> sets specialcharacter = true

Scoring system:
------------------
Starts a score at 0, then adds +1 point for each of these conditions
that is true:
  - Password length is 8 or more characters
  - Contains at least one uppercase letter
  - Contains at least one lowercase letter
  - Contains at least one digit
  - Contains at least one special character

So the maximum possible score is 5.

Final rating (based on total score):
---------------------------------------
- score == 0        -> "TOO WEAKK, koi bhi hack kerlega"
- score 1 to 2       -> "WEAK"
- score 3 to 4       -> "MEDIUM"
- score 5            -> "STRONGESTT"

main():
---------
- Asks the user to enter a password.
- If the password is shorter than 8 characters, it prints a warning
  message ("Must be at least 8 characters") - but note it does NOT
  stop the program, it still goes ahead and calls passcheck() anyway.
- Calls passcheck(pass) to evaluate and print the strength rating.

Small note:
-------------
`cin >> pass` only reads input up to the first space, so if the user
types a password containing spaces, only the part before the first
space will actually be captured and checked.
