/*
Problem: Armstrong Number Check
Description: Check whether a given number is an Armstrong number (sum of digits^number of digits equals the number).
Approach: Count digits, raise each digit to the power of digit count, sum them, and compare with the original number.
Time Complexity: O(d), where d = number of digits
Space Complexity: O(1)
*/


class Solution {
public:
    bool isArmstrong(int n) {
        int dupp = n;
        int count = 0;
        int sum = 0;

        // Step 1: count digits
        int temp = n;
        while (temp != 0) {
            count++;
            temp /= 10;
        }

        // Step 2: calculate sum
        temp = n;
        while (temp != 0) {
            int lastdigit = temp % 10;
            sum += pow(lastdigit, count);
            temp /= 10;
        }

        return sum == dupp;
    }
};
