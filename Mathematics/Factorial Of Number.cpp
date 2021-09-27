class Solution{
    public:
        // Complete this function
    long long factorial(int N) {
        long long int fact=1;
        for(int i=2;i<=N;i++){
            fact=fact*i;
        }
        return fact;
    }

};
