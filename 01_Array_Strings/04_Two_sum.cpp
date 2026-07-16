
/* Two Sum
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
 You may assume that each input would have exactly one solution, and you may not use the same element twice.
 You can return the answer in any order.
 
 Example 1:
 
 Input: nums = [2,7,11,15], target = 9
 Output: [0,1]
 Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].*/

# include<iostream>
#include<vector>
using namespace std ; 
 
 class Solution {
 public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i = 0 ; i<n ; i++){
            for( int j = i +1 ; j < n ; j++){
                if( nums[i] + nums[j] == target){
                    return {i,j};
                }
            }
        }
        return {} ;
    }
 };
int main (){
    Solution obj ;
       vector<int> nums = {2, 7, 11, 15};

       vector<int> ans = obj.twoSum(nums, 9);

       cout << ans[0] << " " << ans[1] << endl;   // ye ans[0] aur  ans[1]  index hai apn ne two sum ko store kara hai ans pe -->   ans = [0,1]      

     vector<int> nums2 = {3,2,4};
     vector<int> ans2 = obj.twoSum(nums2,6);

    cout << ans2[0] << " " << ans2[1] << endl;
  return 0;
}

