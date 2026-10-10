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
