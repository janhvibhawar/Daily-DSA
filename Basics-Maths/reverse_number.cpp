/*
Problem: Reverse a Number
Description: Given an integer n, return its reverse.
Approach: Extract digits using modulo, append to rev, and remove from original using division until number is 0.
Time Complexity: O(d) where d = number of digits
Space Complexity: O(1)
Language: C++
*/

class Solution {
  public:
    int reversenumber(int n) {
        int rev = 0;
        while (n != 0) {
            int digit = n % 10;
            rev = (rev * 10) + digit;
            n = n / 10;
        }
        return rev;
    }
};
