class Solution{
public:
void printNumbers(int n){
   if(n==0)
   return;

   cout<<n<<endl;
   printNumbers(n-1);
  }
}
