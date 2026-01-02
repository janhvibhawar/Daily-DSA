# Daily DSA Practice

## Day 2: Reverse a Number

### Problem Statement
Given an integer `n`, return its reverse.

### Approach
- Initialize a variable `rev` to store the reversed number.
- Extract the last digit of the number using modulo (`n % 10`).
- Append the digit to `rev` by multiplying `rev` by 10 and adding the digit.
- Remove the last digit from the original number using division (`n / 10`).
- Repeat the process until the number becomes 0.

### Time Complexity
O(d), where `d` is the number of digits in the given number.

### Space Complexity
O(1), as only a constant amount of extra space is used.

### Language Used
C++
