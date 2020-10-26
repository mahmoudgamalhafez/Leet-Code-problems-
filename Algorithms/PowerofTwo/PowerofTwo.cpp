/* 
Given an integer n, write a function to determine if it is a power of two.

 

Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1
Example 2:

Input: n = 16
Output: true
Explanation: 24 = 16
Example 3:

Input: n = 3
Output: false
Example 4:

Input: n = 4
Output: true
Example 5:

Input: n = 5
Output: false
 

Constraints:

-231 <= n <= 231 - 1

*/
#include <iostream>
#include <cmath>
using namespace std;
bool isPowerOfTwo(int n)
{
    if(n<0)
        return false ;    
    int i=0 ;
    while(1)
    {
        long pow_of_2=pow(2,i) ;
        if(pow_of_2==n)
            return true ;
        else if (pow_of_2>n)
            return false ;
            
        i++;
    }               
}

int main()
{

}