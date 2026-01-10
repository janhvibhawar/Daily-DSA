/*
Problem: Check Perfect Number
Description: Check if a number equals the sum of its proper divisors.
Approach: Find divisors up to sqrt(n), add divisor pairs to sum, compare with n.
Time Complexity: O(√n)
Space Complexity: O(1)
Language: C++
*/

#include<bits/stdc++.h>
using namespace std;

int checkperfectnumber(int n){
int sum=1;
  for(int i=2; i*i<=n; i++){
     if(n%i==0){
        sum+=i;
        if(i!=n/i){
           sum+=n/i;
        }
     }
  }
return sum;
}

int main(){
  int n;
  cin>>n;

  int ans=checkperfectnumber(n);
  if(n!=1 && ans==n)
    cout<<"Perfect Number";
  else
    cout<<"Not perfect number";

}
