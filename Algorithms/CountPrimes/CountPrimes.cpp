/* 
Count the number of prime numbers less than a non-negative number, n.

 

Example 1:

Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
Example 2:

Input: n = 0
Output: 0
Example 3:

Input: n = 1
Output: 0
 

Constraints:

0 <= n <= 5 * 106

*/
#include <iostream>
using namespace std; 


bool isPrime(int n)
{
    if(n<=1)
        return false ;
    
    if(n<=3)
        return true;
 
    if(n%2==0||n%3==0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 

  
    return true;
}

int countPrimes(int n) 
{
    int count =0;
    for(int i=2;i<n;i++)
    {
        if(isPrime(i)){
            count++;
         
        }
    } 
    return count;       
}

int main()
{

}