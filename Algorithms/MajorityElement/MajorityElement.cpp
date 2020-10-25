/* 
Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.

You may assume that the array is non-empty and the majority element always exist in the array.

Example 1:

Input: [3,2,3]
Output: 3
Example 2:

Input: [2,2,1,1,1,2,2]
Output: 2

*/
#include <iostream>
#include <vector>
using namespace std; 

int majorityElement(vector<int>& nums)
{
    int length =nums.size();
    if(length==1)
        return nums[0];
    vector<int> nums_uniqe ;
    bool found=false;
    for(int i=0;i<length;i++)
    {
        int nums_uniqe_length =nums_uniqe.size() ;
        for(int j=0;j<nums_uniqe_length;j++)
        {
           // cout<<nums[i] <<" " <<nums_uniqe[j];
            //cout <<found << endl ;
            if(nums[i]==nums_uniqe[j])
            {
                found=true ;
                break ;
            }
        }
        //cout << endl ;

        if(!found)
        {
             
            nums_uniqe.push_back(nums[i]);
           
            int count=1 ;
            for(int j=i+1;j<length;j++)
            {
                if(nums[j]==nums[i])
                    count++;
            }
            if(count>length/2)
                return nums[i];
           // cout<< count <<endl ;
        }
        //cout<<found <<endl;
        found=false ;
        
       
    } 
    return -1;
}

int main ()
{

}