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


SUMMARY
--------
- Program 1: Matrix stats (largest, smallest, sum, both diagonals).
- Program 2: Finds duplicates but only remembers the last one found.
- Program 3: Finds and prints ALL duplicate pairs with their indexes.
- Program 4: Rotates an array to the right by a given number of steps.
