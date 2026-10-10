#include<iostream>
using namespace std;

int differenceOfSums(int n, int m) {
        int firstsum = 0;
        int nextsum = 0;
        for(int i=1; i<=n; i++){
            if(i%m!=0){
                firstsum+=i;
            }else{
                nextsum+=i;
            }
        }
        return firstsum - nextsum;
}


int main(){
        int n;
        cout << "Enter first number";
        cin >> n;

        int m;
        cout << "Enter second number";
        cin >> m;

        int diff = differenceOfSums(n,m);
        cout << diff ;
return 0;
}
