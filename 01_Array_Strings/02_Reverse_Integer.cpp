/*7. Reverse Integer
  Given a signed 32-bit integer x, return x with its digits reversed. If reversing x   causes the value to go outside the signed 32-bit integer range [-231, 231 - 1],   then return 0.
  
  Assume the environment does not allow you to store 64-bit integers (signed or   unsigned).
   
 Example 1:
  Input: x = 123
  Output: 321

 Example 2: 
  Input: x = -123
  Output: -321*/
                 
     //#   Same approach as above problems
//   class Solution {
//   public:  
//         int reverse(int x) {
//         int rev = 0 ;

//         while(x !=0){
//             int lastDigit = x % 10 ;
//             rev = rev * 10 + lastDigit ;  // rev = 0 * 10 + 3 = 3       =->         rev = 3 * 10 + 2 = 32   ->   rev = 32 * 10 + 1 = 321
//             x = x / 10 ;
//         }
//         return rev ;
//       }
//   }; 
  /*  ab ye run tho ho jayega  liken jab submit karenge tho error ayegi  becoz   [-2^31, 2^31 - 1 ]  range  agr esek baha hua tho ans ko =  0 return karna hoga  isliye  ek exception case bana hoga  or usko handle karna hoga  
   
    rev*10 + lastDigit > INT_MAX  or  rev*10 + lastDigit < INT_MIN  tho return 0 karna hoga  or ye dono condition ko ek sath bhi likh sakte h  (rev > INT_MAX/10 || rev < INT_MIN/10)  tho return 0 karna hoga   */

  #include<iostream>
  #include <climits>  // for INT_MAX and INT_MIN
  using namespace std ; 
  class Solution {
  public:  
        int reverse(int x) {
        int rev = 0 ;

        while(x !=0){
            int lastDigit = x % 10 ;
            if(rev > INT_MAX/10 || rev < INT_MIN/10){
               return 0 ;
            }
            rev = rev * 10 + lastDigit ; 
            x = x / 10 ;
        }
        return rev ;
      }
  }; 
  int main() {
    Solution obj;

    cout << obj.reverse(123) << endl;
    cout << obj.reverse(-123) << endl;
    cout << obj.reverse(120) << endl;

    return 0;
}

