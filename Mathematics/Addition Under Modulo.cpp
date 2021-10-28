class Solution{
    public:
        long long sumUnderModulo(long long a,long long b)
    {
        long long sum,x,y,c,d,e; 
        
        x= pow(10,9);
        
        y= x+7;
        
        c= a%y;
        d= b%y;
        sum = c+d;
        e=sum%y;
        return e;
    }
};
