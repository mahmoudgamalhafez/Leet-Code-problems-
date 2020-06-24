/*9. Palindrome Number
Easy

2276

1542

Add to List

Share
Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

Example 1:

Input: 121
Output: true
Example 2:

Input: -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
*/

#include <iostream>
using namespace std; 
#define INT_MAX     2147483647
#define INT_MIN     (-INT_MAX - 1)

bool isPalindrome1(int x)
{
    if(x<0)
        return false;
    string str= to_string(x);
    int i=0,j=str.length()-1;
    while(i<=j){
        cout<<str[i]<<" "<<str[j] <<endl;
        if(str[i]!=str[j])
            return false;
        i++ ;
        j--;    
    }   
    return true;    
}
bool isPalindrome2(int x)
{
    if(x<0)
        return false;
    int rev=0,val;
    val = x;
    while(x > 0) {
      if ( rev >INT_MAX/10 )
          return false;
      rev = rev * 10 + x % 10;
      x = x / 10;
    }
      
  return val == rev ? true : false;
}

int main()
{
    cout<< isPalindrome1(5775)<<endl ;

}