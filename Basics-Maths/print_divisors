#include <bits/stdc++.h>
using namespace std;

  vector<int> divisors(int n){
           vector<int> ls;
              for(int i=1; i*i<=n; i++){
                 if(n%i==0){
                   ls.push_back(i);
                 if(i!=(n/i)){
                   ls.push_back(n/i);
                 }
            }
        }
        sort(ls.begin(),ls.end());
        return ls;
    }

int main() {
    int n;
    cin>>n;
        //your code goes here
       vector<int> news= divisors(n);
       
       for(int x : news){
        cout << x << " ";
    }
};
