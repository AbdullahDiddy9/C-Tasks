README - Explanation of Two C++ Programs
============================================


1) REMOVE DUPLICATES + SORT DESCENDING
------------------------------------------
File purpose: Takes a fixed array, removes all duplicate values from
it, then sorts the remaining unique values in descending order.

How it works:
- Starts with array {9,1,7,1,3,8,2,2,9,9} and calculates its size.

Step 1 - Removing duplicates:
- Uses two nested loops to compare every element (arr[i]) with every
  element after it (arr[j]).
- Whenever a duplicate is found (arr[i] == arr[j]):
  - An inner loop shifts all elements after position j one step to
    the left, overwriting the duplicate and closing the gap.
  - "size" is decreased by 1 (since the array effectively got shorter).
  - "j--" is done so the loop re-checks the same position j again
    (since a new value has just shifted into it) before moving on.
- This process repeats until no duplicates remain, leaving only
  unique values in the front part of the array.

Step 2 - Sorting descending:
- Uses a simple bubble/selection-style nested loop (comparing arr[i]
  with arr[j] where j > i) and swaps them if arr[i] < arr[j], pushing
  bigger numbers to the front. This is basically selection sort logic
  arranged in descending order.

Step 3 - Print:
- Prints the final array (now duplicate-free and sorted from highest
  to lowest).


2) LARGEST PAIR SUM (ACROSS TWO ARRAYS)
-------------------------------------------
File purpose: Given two arrays "a" and "b", find the largest possible
sum you can make by picking a pair of numbers from any of these
combinations: (a,a), (a,b), or (b,b) - and prints whichever
combination gives the overall biggest sum.

How it works:
- Arrays: a = {1,3,5,2,8,3,4,9}  and  b = {7,5,2,2,5,9}

Case 1 - a + a:
- Nested loop checks every pair (a[i], a[j]) where i != j (so it
  doesn't add a number to itself).
- Keeps track of the largest sum found ("largest") and the two
  numbers that made it (num1, num2).

Case 2 - a + b:
- Nested loop checks every pair (a[i], b[j]) - no i != j restriction
  needed since they're different arrays.
- Keeps track of the largest sum ("l1") and the numbers (num3, num4).

Case 3 - b + b:
- Same idea as Case 1, but for array b with itself (i != j to avoid
  using the same index twice).
- Keeps track of the largest sum ("l2") and the numbers (num5, num6).

Final comparison:
- Compares "largest", "l1", and "l2" against each other and prints
  whichever pair produced the biggest sum overall, along with the
  actual numbers and their sum (e.g. "8 + 9 = 17").

Small note: The a+b case doesn't restrict i != j since they're
different arrays, but it can still repeat the same value pair
combination in a different order - that's expected since a and b are
separate arrays.
