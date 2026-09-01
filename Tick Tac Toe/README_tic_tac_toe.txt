Tic-Tac-Toe Game (X vs O)
============================

A simple two-player Tic-Tac-Toe game played in the console on a 3x3
board, using recursion to keep the game going turn by turn.

How it works (Rounds() function):
-----------------------------------
The function takes the board (arr) and the number of moves played so
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
- Exactly the same process as Player X's turn above, but for 'O'
  instead.

Continuing the game:
- After both players have taken a turn (and nobody won or drew), the
  function calls itself again (Rounds(arr, moves)) - this is
  recursion. This means the whole function starts over: X plays, then
  O plays, and so on, until someone wins or the board fills up (draw).

main():
---------
- Creates an empty 3x3 board where every cell starts as a blank space.
- Prints the empty board.
- Calls Rounds(board, 0) to start the game with 0 moves played so far.

Key idea:
-----------
Instead of using a while/for loop to repeat turns, this program uses
recursion - the function calls itself at the end to simulate the
"next round" of the game, and it keeps doing that until a win or draw
condition triggers a "return" that stops the recursive calls.

Small note:
-------------
The win-check only tests the row/column of the piece that was just
placed (plus both diagonals every time), so it does not check every
row/column - just the relevant one for that move. This is efficient
and correct because a new move can only create a win along its own
row, column, or diagonal.
