/* 
Given two binary strings, return their sum (also a binary string).

The input strings are both non-empty and contains only characters 1 or 0.

Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"
 

Constraints:

Each string consists only of '0' or '1' characters.
1 <= a.length, b.length <= 10^4
Each string is either "0" or doesn't contain any leading zero.

*/
#include <iostream>
#include <vector>
#include <string>
using namespace std; 

string addBinary(string a, string b) {
    string result ="";
    int i=a.size()-1;
    int j=b.size()-1;
    int carry=0;
    
    while(i>=0||j>=0)
    {
        int sum=carry ;
        if(i>=0)
        {
            sum+=a[i--]-'0';
        }
        if(j>=0)
        {
            sum+=a[j--]-'0';
        }
        if(sum%2)
            result.insert(0,"1") ;
        else
        {
            result.insert(0,"0") ;
        }
        
        carry=sum/2 ;
    } 
    if(carry>0)
        result.insert(0,"1") ;

    return  result;      
}