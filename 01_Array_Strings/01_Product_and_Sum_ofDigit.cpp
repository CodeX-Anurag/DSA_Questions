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
  *) Sum of digits
  *) Product of digits
  *) Reverse a number
  *) Count digits
  *) Palindrome Number
  *) Armstrong Number
  
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
 int main (){
  Solution obj ; 
  cout<<obj.subtractProductAndSum(234);
 }
/*The only thing that changes is what you do with digit:

  Sum of digits      →  sum += digit
  Product of digits  →  product *= digit
  Reverse number     →  rev = rev * 10 + digit
  Count digits       →  count++
  Check palindrome   →  build the reverse and compare
  Armstrong number   →  add digit^numberOfDigits
  */
