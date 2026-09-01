# Number Guessing Game

A simple C++ console game where the computer picks a random number
between 1 and 100, and the player has up to 5 tries to guess it.

## How it works

- `srand(time(0))` seeds the random number generator so you get a
  different number each time you run the program.
- `rand()%100+1` generates a random number between 1 and 100.
- The player enters a guess inside a `do...while` loop.
- After each guess, the program gives a hint:
  - **MATCHED** -> guess is exactly correct, game ends immediately.
  - **CLOSE** -> guess is within 5 of the actual number (either side).
  - **TOO LOW** -> guess is smaller than the number.
  - **TOO HIGH** -> guess is bigger than the number.
- The loop keeps running until either the guess is correct or the
  player has used all 5 tries (`count < 5`).
- At the end, it reveals the correct number and tells the player if
  they won ("CONGRATULATIONS AND CELEBRATIONS") or lost ("LOSERR").

## Note

The `count++` line is not inside the if/else block (just misleading
indentation), but since there's no `{}` around it, it still executes
every loop iteration - so the turn counter works correctly, even
though the code layout looks confusing at first glance.
