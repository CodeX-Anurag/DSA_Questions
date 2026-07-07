# include <iostream>
using namespace std ;
/*1281. Subtract the Product and Sum of Digits of an Integer
  Given an integer number n, return the difference between the product of its digits and the sum of its digits.
  Example 1:
  
  Input: n = 234
  Output: 15 
  Explanation: 
  Product of digits = 2 * 3 * 4 = 24 
  Sum of digits = 2 + 3 + 4 = 9 
  Result = 24 - 9 = 15
  


  #] There a important trick to grt it  and its applie for all the problems related to digits of a number
  ✅ Sum of digits
  ✅ Product of digits
  ✅ Reverse a number
  ✅ Count digits
  ✅ Palindrome Number
  ✅ Armstrong Number
  
  Let's understand this 
  Suppose
  n = 234
  Our goal is to get every digit one by one.
  

                                  #   A P P R O A C H   #
Step 1: Take the last digit
  
  We use :-> n % 10
  
  Why? ->  Because % gives the remainder.
  
  234 ÷ 10
  
  Quotient = 23
  Remainder = 4
  
  So ->  234 % 10 = 4
  
  We got the last digit!
     234
       ↑
  Last Digit = 4
  
  This is exactly what we have to do 
#) sabse pehle last digit nikalna hai phir usko use karna hai aur fir usko remove karna hai
  
  n % 10 → 4


Step 2: Remove the last digit
  
  Now we don't want 4 anymore.
  So we divide by 10.
  
  n = n / 10;
  234 / 10 = 23
  
  Notice : The decimal part is removed because n is an integer.
  
  23.4 
   ↓
   23
  n = 23
  
  
Step 3 : Again
  
  n % 10
  23 % 10
  23 ÷ 10
  
  Quotient = 2
  Remainder = 3
  
  Digit is : 3
  
  Remove it
  
  n = n / 10;
  23 / 10 = 2

  n = 2

Step 4 : Again
  
  2 % 10
  
  Answer :  2
  
  Remove it : 2 / 10 = 0
  
  Now : n = 0
  Done!
  */

  class Solution {
  public:
    int subtractProductAndSum(int n) {

    int sum = 0 ;
    int product = 1 ;

    while(n != 0 ){      // or (n > 0)
        int lastDigit = n % 10 ;      // last digit nikalne ke liye
        sum += lastDigit ;          
        product *= lastDigit ;       
        int removeLastDigit = n / 10 ;   // last digit remove karne ke liye    or      n = n / 10 ;  
        n = removeLastDigit ; 
    }
    return product - sum ;
  }
};
/*The only thing that changes is what you do with digit:

  Sum of digits      →  sum += digit
  Product of digits  →  product *= digit
  Reverse number     →  rev = rev * 10 + digit
  Count digits       →  count++
  Check palindrome   →  build the reverse and compare
  Armstrong number   →  add digit^numberOfDigits
  */


/*191. Number of 1 Bits
  Given a positive integer n, write a function that returns the number of set bits in its binary representation (also known   as the Hamming weight).
  
  Example 1:
  Input: n = 11
  Output: 3
  Explanation: The input binary string 1011 has a total of three set bits.
  
  Example 2:
  Input: n = 128
  Output: 1
  Explanation: The input binary string 10000000 has a total of one set bit.

  Approach
    Initialize count = 0.
    While n is not 0:
    Check the last bit using n & 1.
    If the last bit is 1, increment count.
    Right shift n by 1 (n = n >> 1) to remove the last bit.
    Return count.*/


  class Solution {
 public:
    int hammingWeight(int n) {
        int count = 0 ;

        while(n != 0){
            int lastBit = n & 1 ;                       // if(n & 1){ count++ ; }  or  count += n & 1 ;
                                                                 
            count += lastBit ;      
            n = n >> 1 ;          

        }
        return count ;
    }
 }; 



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
  class Solution {
  public:  
        int reverse(int x) {
        int rev = 0 ;

        while(x !=0){
            int lastDigit = x % 10 ;
            rev = rev * 10 + lastDigit ;  // rev = 0 * 10 + 3 = 3       =->         rev = 3 * 10 + 2 = 32   ->   rev = 32 * 10 + 1 = 321
            x = x / 10 ;
        }
        return rev ;
      }
  }; 
  /*  ab ye run tho ho jayega  liken jab submit karenge tho error ayegi  becoz   [-2^31, 2^31 - 1 ]  range  agr esek baha hua tho ans ko =  0 return karna hoga  isliye  ek exception case bana hoga  or usko handle karna hoga  
   
    rev*10 + lastDigit > INT_MAX  or  rev*10 + lastDigit < INT_MIN  tho return 0 karna hoga  or ye dono condition ko ek sath bhi likh sakte h  (rev > INT_MAX/10 || rev < INT_MIN/10)  tho return 0 karna hoga   */

  #include <climits>  // for INT_MAX and INT_MIN 
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



/*1009. Complement of Base 10 Integer

  The complement of an integer is the integer you get when you flip all the 0's to   1's and all the 1's to 0's in its binary representation.
  
  For example, The integer 5 is "101" in binary and its complement is "010" which is   the integer 2.
  Given an integer n, return its complement.
  
  Example 1:
  
  Input: n = 5
  Output: 2
  Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in   base-10.*/

  class Solution {
  public:
   int bitwiseComplete(int n){
    int m = n ;
    int mask = 0 ;

    if(n == 0){
        return 1 ;
    }
    while(m != 0){
        mask = (mask << 1) | 1 ;   // mask = 0 << 1 | 1 = 1    mask = 1 << 1 | 1 = 3     mask = 3 << 1 | 1 = 7
        m = m >> 1 ;
    }
    return n ^ mask ;  // 5 ^ 7 = 2
   }
  };