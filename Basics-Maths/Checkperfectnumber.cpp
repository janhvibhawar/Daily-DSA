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
