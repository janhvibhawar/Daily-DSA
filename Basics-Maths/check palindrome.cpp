/*
Problem: Check Palindrome
Description: Given an integer, check whether it is a palindrome.
Approach: Reverse the number using a loop and compare with the original.
Time Complexity: O(n)
Space Complexity: O(1)
Platform: LeetCode
Learning: Reversing a number and comparing values correctly.
*/

class Solution {
public:
    bool isPalindrome(int n) {
        long long reversenumber = 0;
        int dup = n;

             if(n<0) return false;

            while(n>0)
            {
                int lastdigit = n % 10;
                reversenumber = (reversenumber * 10) + lastdigit;
                n=n/10;
            }
            
             return dup == reversenumber;
    }
};
