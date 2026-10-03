#include<bits/stdc++.h>
using namespace std;

int sumOfMultiples(int n) {
        int sum = 0;
        for(int i=1; i<=n; i++){
            if(i%3==0){
                sum+=i;
            }
            else if(i%5==0){
                sum+=i;
            }
            else if(i%7==0){
                sum+=i;
            }
        }
        return sum;
}

int main() {
    int n = 7; 
    int result = sumOfMultiples(n);
    
    cout << "The sum of multiples up to " << n << " is: " << result << endl;
    
    return 0;
}
