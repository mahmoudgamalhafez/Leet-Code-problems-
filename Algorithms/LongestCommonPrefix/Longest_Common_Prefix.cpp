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

// #include <iostream>
// #include <vector> 

// using namespace std; 

// string longestCommonPrefix(vector<string>& strs) 
// {
//       string  LCP="" ;
//       int length = strs.size();
//       int j=0;
//       while(true){
//             for(int i=0;i<length;i++){
//                   if(j>=strs[i].length())
//                   {
//                         return LCP;
//                   }
//             }
//             char ch =strs[0][j];
//             for(int i=1;i<length;i++)
//             {
//                   if(strs[i][j]!=ch)
//                   {
//                         break;
//                   }
//             }
//       }   
// }

// int main()
// {

// }