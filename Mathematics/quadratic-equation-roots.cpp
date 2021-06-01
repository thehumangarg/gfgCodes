/*Given a quadratic equation in the form ax2 + bx + c. Find its roots.

Example 1:

Input:
a = 1
b = -2
c = 1
Output: 1 1
Explanation:
Roots of equation x2-2x+1 are 1 and 1.

Example 2:

Input:
a = 1
b = -7
c = 12
Output: 4 3
Explanation: Roots of equation 
x2 - 7x + 12 are 4 and 3.
 

Your Task:
You don't need to read input or print anything. Your task is to complete the function quadraticRoots() which takes a, b, c as input parameters and returns a list of two integers containing the floor value of its roots in decreasing order. If roots are imaginary, the returning list should contain only 1 integer ie -1. 
Note: If roots are imaginary, the generated output will display "Imaginary".

 

Expected Time Complexity: O(1)
Expected Auxiliary Space : O(1)

 

Constraints:
-103 <= a,b,c <= 103*/

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
