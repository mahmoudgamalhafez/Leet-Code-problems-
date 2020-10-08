/* 
Implement strStr().

Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Clarification:

What should we return when needle is an empty string? This is a great question to ask during an interview.

For the purpose of this problem, we will return 0 when needle is an empty string. This is consistent to C's strstr() and Java's indexOf().

 

Example 1:

Input: haystack = "hello", needle = "ll"
Output: 2
Example 2:

Input: haystack = "aaaaa", needle = "bba"
Output: -1
Example 3:

Input: haystack = "", needle = ""
Output: 0
 

Constraints:

0 <= haystack.length, needle.length <= 5 * 104
haystack and needle consist of only lower-case English characters.
8
*/

#include <iostream>
#include <string> 
using namespace std; 
int strStr(string haystack, string needle) 
{
    int n =haystack.size();
    int m =needle.size();
    if(m==0) 
        return 0 ;
    if(m> n)
        return -1; 
   
    
    for(int i=0;i<=n-m;i++)
    {   
       int j ; 
       for(j=0 ;j<m;j++)
       {
           if(haystack[i+j]!=needle[j])
           {    
               break ;
           }
           
       }
      
       if(j==m){
         
            return i;
       }
 
    }      
    
    return  -1;
}
int main()
{
    
    int n =strStr("abc" ,"c");
    cout << n <<endl;
}