/* 
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
Note:

All given inputs are in lowercase letters a-z.

*/

//  A C++ Program to find the longest common prefix 
#include<bits/stdc++.h> 
using namespace std; 
  
// A Function to find the string having the minimum 
// length and returns that length 
int findMinLength(vector<string>& strs) 
{ 
    int min = strs[0].length(); 
    int n =strs.size();
  
    for (int i=1; i<n; i++) 
        if (strs[i].length() < min) 
            min = strs[i].length(); 
  
    return(min); 
} 
    string longestCommonPrefix(vector<string>& strs) 
    {
        int n =strs.size();
        if(n<=0)
            return "";
        int minlength=findMinLength(strs);
        
        char current ;
        string result="" ;
        
        for(int i=0;i<minlength;i++)
        {
             current = strs[0][i]; 

            for (int j=1 ; j<n; j++) 
                if (strs[j][i] != current) 
                    return result; 

            // Append to result 
            result.push_back(current);
        }

        return result;

    }

// Driver program to test above function 
int main() 
{ 
    vector<string> strs = {}; 
    
  
    string ans = longestCommonPrefix (strs); 
  
    if (ans.length()) 
        cout << "The longest common prefix is "
             << ans; 
    else
        cout << "There is no common prefix"; 
    return (0); 
} 