/*
Problem: Count Digits of a Number
Description: Count the number of digits in a given integer.
Approach: Remove last digit repeatedly using division and increment a counter until number becomes 0.
Time Complexity: O(d), where d = number of digits
Space Complexity: O(1)
*/


#include<bits/stdc++.h>
using namespace std;

int countdigit(int n){
        int count=0;
        while(n!=0){
        int c=n%10;
        count++;
        n=n/10;
    }
    return count;
} 

int main(){
    int n;
    cin>>n;

    int result=countdigit(n);
    cout<<result;
}

    
