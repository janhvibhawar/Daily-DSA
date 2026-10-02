#include<bits/stdc++.h>
using namespace std;

int missingNumber(int n, vector<int> arr){
    int sum = 0;
    sum = n*(n+1)/2;
    int newSum = 0;
    for(int i=0; i<n; i++){
        newSum += arr[i];
    }
    return sum - newSum;
}


