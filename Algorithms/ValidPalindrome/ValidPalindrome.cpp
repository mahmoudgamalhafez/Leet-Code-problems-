/* 
Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Note: For the purpose of this problem, we define empty string as valid palindrome.

Example 1:

Input: "A man, a plan, a canal: Panama"
Output: true
Example 2:

Input: "race a car"
Output: false
 

Constraints:

s consists only of printable ASCII characters.

*/
#include <iostream>
#include <string>
//#include <locale>         // std::locale, std::tolower
using namespace std; 

bool isPalindrome(string s)
{
    int length =s.size() ;
    string d ;
    for(int i=0 ;i<length;i++)
    {      
        if(::isalpha(s[i]) || ::isdigit(s[i])){
                d.push_back(::tolower(s[i]));
        }
    }
    length=d.size();
    for(int i=0 ;i<length;i++)
    { 
        if(s[i]!=s[length-1-i]){
            return false;
        }
    }  
    return true;  
}

int main()
{

}