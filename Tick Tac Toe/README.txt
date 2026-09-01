README - Explanation of C++ Programs
======================================

This file explains what each of the four C++ programs does, in simple terms.


1) MATRIX OPERATIONS PROGRAM
-----------------------------
File purpose: Takes a matrix (n rows x 4 columns) from the user and performs
several operations on it.

Functions:
- largest()          -> Loops through every element and keeps track of the
                         biggest value found. Prints it.
- smallest()          -> Same idea as largest(), but keeps track of the
                         smallest value instead.
- summatrix()         -> Adds up every single element in the matrix and
                         prints the total sum.
- diagonal()          -> Adds up the elements where row index == column
                         index (i == j). This is the main diagonal
                         (top-left to bottom-right).
- secondrydiagonal()  -> Adds up the elements where column index equals
                         (n-1-i). This is the anti-diagonal / secondary
                         diagonal (top-right to bottom-left).

main():
- Asks how many rows the matrix should have (columns are fixed at 4).
- Takes all matrix values as input.
- Prints the matrix back to the user.
- Calls all five functions above one by one to show the results.

Note: This matrix program appeared twice in your message - it's the same
code, so it's only explained once here.


2) DUPLICATE FINDER (Version 1 - last duplicate value)
--------------------------------------------------------
File purpose: Finds duplicate numbers in an array using two nested loops
(comparing every element with every element after it).

How it works:
- The inner loop compares arr[i] with arr[j] for all j after i.
- Whenever a match is found, "count" is updated to store that duplicate
  value. (Note: if there are multiple different duplicate values, this
  version will only remember the LAST one found, since "count" keeps
  getting overwritten.)
- After the loops finish, it prints the duplicate value stored in "count".
- Then it loops through the array again and prints every index where that
  value appears.

Limitation: This version can only correctly report one duplicate value
(the last one it detects), not all duplicate values if there are several.


3) DUPLICATE FINDER (Version 2 - all duplicate pairs)
--------------------------------------------------------
File purpose: Also finds duplicates, but in a more complete way.

How it works:
- Same nested loop structure (arr[i] compared with arr[j] for j after i).
- BUT this time, as soon as a match is found, it immediately prints the
  duplicate value along with the two index positions (i and j) where the
  match occurred.

Difference from Version 1: This version prints EVERY duplicate pair it
finds immediately, so it can show multiple different duplicate values and
all their positions, unlike Version 1 which only remembers the last one.


4) ARRAY ROTATION PROGRAM
---------------------------
File purpose: Rotates the elements of an array to the right by a
user-given number of positions.

How it works (rotate() function):
- Asks the user how many times ("x") to rotate the array.
- If x is less than or equal to the array size, it performs a
  "right rotation" x times:
    - It saves the last element of the array (temp = arr[size-1]).
    - It shifts every other element one position to the right.
    - It places the saved last element at the very front (arr[0] = temp).
  Repeating this process x times rotates the array x steps to the right.
- If x is greater than the array size, it prints "ERROR" since rotating
  more times than the array's length doesn't make sense with this method.

main():
- Takes array size and elements from the user.
- Prints the original array.
- Calls rotate() to rotate it.
- Prints the array again after rotation to show the result.


5) TIC-TAC-TOE PROGRAM (X vs O)
----------------------------------
File purpose: A simple two-player Tic-Tac-Toe game played in the console
on a 3x3 board, using recursion to keep the game going turn by turn.

How it works (Rounds() function):
- The function takes the board (arr) and the number of moves played so
  far (moves) as parameters.

Player X's turn:
- Asks the player for a column and row (1 to 3).
- Checks if the position is valid (within 1-3 range) - if not, prints
  "Invalid position" and stops.
- Checks if that cell is already filled - if yes, prints "Position
  already occupied" and stops.
- Places 'X' on the board at that position.
- Reprints the whole board so both players can see the current state.
- Checks for a win: it checks the row just played in, the column just
  played in, and both diagonals, to see if all three cells match 'X'.
  If so, it announces "Player X wins" and stops the game.
- Increases the move counter. If it reaches 9 (all cells filled), it
  announces a draw and stops.

Player O's turn:
- Exactly the same process as Player X's turn above, but for 'O' instead.

Continuing the game:
- After both players have taken a turn (and nobody won or drew), the
  function calls itself again (Rounds(arr, moves)) - this is recursion.
  This means the whole function starts over: X plays, then O plays,
  and so on, until someone wins or the board fills up (draw).

main():
- Creates an empty 3x3 board where every cell starts as a blank space.
- Prints the empty board.
- Calls Rounds(board, 0) to start the game with 0 moves played so far.

Key idea: Instead of using a while/for loop to repeat turns, this program
uses recursion - the function calls itself at the end to simulate the
"next round" of the game, and it keeps doing that until a win or draw
condition triggers a "return" that stops the recursive calls.

Small note: The win-check only tests the row/column of the piece that was
just placed (plus both diagonals every time), so it does not check every
row/column - just the relevant one for that move. This is efficient and
correct because a new move can only create a win along its own row,
column, or diagonal.


SUMMARY
--------
- Program 1: Matrix stats (largest, smallest, sum, both diagonals).
- Program 2: Finds duplicates but only remembers the last one found.
- Program 3: Finds and prints ALL duplicate pairs with their indexes.
- Program 4: Rotates an array to the right by a given number of steps.
- Program 5: Recursive two-player Tic-Tac-Toe game (X vs O).
