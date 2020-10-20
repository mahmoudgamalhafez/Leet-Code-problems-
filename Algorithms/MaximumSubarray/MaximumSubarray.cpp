/* 
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

Follow up: If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.

 

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
Example 2:

Input: nums = [1]
Output: 1
Example 3:

Input: nums = [0]
Output: 0
Example 4:

Input: nums = [-1]
Output: -1
Example 5:

Input: nums = [-2147483647]
Output: -2147483647
 

Constraints:

1 <= nums.length <= 2 * 104
-231 <= nums[i] <= 231 - 1

*/
#include <iostream>
#include <vector>
#include <limits>
using namespace std; 

// int maxSubArray(vector<int>& nums)
// {
//     int size =nums.size();
//     int max_so_far = 0, max_ending_here = 0; 
//     for(int i=0;i<size;i++)
//     {
        
//         max_ending_here = max_ending_here + nums[i]; 
//         if (max_so_far < max_ending_here) 
//             max_so_far = max_ending_here; 
  
//         if (max_ending_here < 0) 
//             max_ending_here = 0; 
        
//     }
//     return max_so_far;
// }

/* Brute Force Algorthim*/
int maxSubArray(vector<int>& nums)
{
    int ans = INT_MIN ;
    int n =nums.size();
    for(int start_index=0 ; start_index<n;start_index++)
    {
        int sum=0;
        for(int sub_arry_size=1;sub_arry_size<=n;sub_arry_size++){
            if(start_index+sub_arry_size>n)
                break;
            sum+=nums[start_index+sub_arry_size-1];
            if(ans<sum)
                ans=sum
        }
    } 
    return ans ;
}

/*Divide and quenqer */
int maxSubArray(vector<int>& nums)
{
    
}
int main()
{

}