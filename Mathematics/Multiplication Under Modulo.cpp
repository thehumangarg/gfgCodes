class Solution{
    public:
        int multiplicationUnderModulo(long long a,long long b)
    {
        long long mult ,x,y;
        
        x=pow(10,9);
        y=x+7;
        mult = ((a % y)*(b%y))%y;
        
        return mult;
    }
};
