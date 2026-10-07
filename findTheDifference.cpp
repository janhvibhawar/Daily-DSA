#include<iostream>
#include<string>
using namespace std;

char findTheDifference(string s, string t){
char result = 0;
        for (char c : s) {
            result ^= c;
        }
        
        for (char c : t) {
            result ^= c;
        }
        
        return result;
}

int main(){
  string s, t;
  
  cout << "Enter the first string:";
  cin >> s;

  cout << "Enter the second string";
  cin >> t;

  char output = findTheDifference(s,t);
  cout << "The added character is:" << output << endl;

  return 0;
}
