class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        float d;
        float s1,s2;
        vector<int> result(2);
        
        int p;
        
        p=(b*b) - (4*a*c);
        d= sqrt((b*b) - (4*a*c));
        
        if(p<0){
        
        return vector<int>(1, -1);;
        }
        
        else{
        s1=(-b+d)/(2*a);
        s2=(-b-d)/(2*a);
        
        result[0]= (int)floor(s1);
        result[1]= (int)floor(s2);
        
        if(result[0]<result[1])
        swap(result[0], result[1]);
        
        
        return result;}
        
        
    }
};
