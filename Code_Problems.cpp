// Code_Chef Problem: https://www.codechef.com/problems/INTEST

#include <iostream>
using namespace std;

int main(){
   int a=10, b=3;
    //cout<<div(10,2)<<endl;  // ERROR dega
cout<<div(6,2).quot<<endl; // Outputs 3  ye 
 return 0;
}
/*
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, 
representing the number of elements in nums1 and nums2 respectively.Merge nums1 and nums2 into a single array sorted in non-decreasing order.
The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, 
nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

Example 1:

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
        int i = m -1 ;
        int j = n -1 ;
        int k = m + n - 1 ;
        while(i >= 0 && j >= 0){
            if(nums1[i] > nums2[j]){
                nums1[k] = nums1[i];
                i--;
            }
            else{
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }
    }
}

/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if(string.empty()){
            return "";
        }
         string prefix = strs[0];
           for (int i = 1; i < strs.size(); i++){
            while (strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.length() - 1);
                if (prefix.empty()) {
                    return "";
                }
            }
        }
        return prefix;
    }
};
/*
Given two binary strings a and b, return their sum as a binary string.
Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"
*/

class Solution {
public: 
     string a , b ;
     
     int main (){
         for (i = 0 ;  )
        return 0; 
     }
 }

 