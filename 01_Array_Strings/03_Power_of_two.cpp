
/*231. Power of Two
  Given an integer n, return true if it is a power of two. Otherwise, return false.
  An integer n is a power of two, if there exists an integer x such that n == 2x.
  
  Example 1:
  Input: n = 1
  Output: true
  Explanation: 2^0 = 1 
  
  
  Example 2:
  Input: n = 16
  Output: true
  Explanation: 2^4 = 16
  
  Example 3:
  Input: n = 3
  Output: false*/

  #include<iostream>
  #include<math.h>
  using namespace std ; 
 class Solution {
  public:
    bool isPowerOfTwo(int n) {

        if (n <= 0)
            return false;

        for (int x = 0; x <= 30; x++) {
            if (pow(2, x) == n) {
                return true;
            }
        }
     return false;
    }
};
 int main (){
    Solution obj ;
    cout<<boolalpha;  // for output true , fales otherwise 1  0 

    cout<<obj.isPowerOfTwo(16)<<endl;
    cout<<obj.isPowerOfTwo(3)<<endl;
 }