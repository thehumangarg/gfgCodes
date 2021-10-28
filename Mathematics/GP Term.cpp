double termOfGP(int A,int B,int N)
    {   
        
        if(N==1)
        return A;
        
        if(N==2)
        return B;
        
        
        double x=A,y=B;
        
        float r=y/x;
        
        double n= x*(pow(r,N-1));
        
        return n;
        
    }
