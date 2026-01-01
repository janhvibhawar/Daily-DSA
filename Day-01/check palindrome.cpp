class Solution {
public:
    bool isPalindrome(int n) {
        long long reversenumber = 0;
        int dup = n;

             if(n<0) return false;

            while(n>0)
            {
                int lastdigit = n % 10;
                reversenumber = (reversenumber * 10) + lastdigit;
                n=n/10;
            }
            
             return dup == reversenumber;
    }
};
