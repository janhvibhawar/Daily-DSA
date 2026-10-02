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


int main(){
    int n;
    cout << "Enter the number of elements in array:";
    cin >> n;
    cout << "Enter elements :";
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
   int ans = missingNumber(n,arr);
    cout << "Missing Number is:" << ans;
   return 0;
}
