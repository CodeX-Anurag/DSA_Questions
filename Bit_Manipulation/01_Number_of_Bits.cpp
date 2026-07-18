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

 My Approach
    Initialize count = 0.
    While n is not 0:
    Check the last bit using n & 1.
    If the last bit is 1, increment count.
    Right shift n by 1 (n = n >> 1) to remove the last bit.
    Return count.*/

 #include<iostream>
 using namespace std ;

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
 int main (){
    Solution obj ; 
    cout<<obj.hammingWeight(12)<<endl;
    cout<<obj.hammingWeight(1243)<<endl;
 }
