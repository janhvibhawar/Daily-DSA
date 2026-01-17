class Solution{	
	public:		
		bool palindromeCheck(int i,string& s){
			//your code goes here
			if(i>=s.size()/2) return true;
			if(s[i]!=s[s.size()-i-1])
			return false;

			return palindromeCheck(i+1,s);
			
		}
};
