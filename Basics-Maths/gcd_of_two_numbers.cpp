/*
Problem: GCD of Two Numbers
Description: Find the greatest common divisor (GCD) of two positive integers.
Approach: Use the Euclidean Algorithm (repeatedly replace a with b and b with a % b until b becomes 0).
Time Complexity: O(log min(a, b))
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }

    cout << "GCD is: " << a << endl;
    return 0;
}

#
