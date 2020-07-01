/* 
You have a total of n coins that you want to form in a staircase shape, where every k-th row must have exactly k coins.

Given n, find the total number of full staircase rows that can be formed.

n is a non-negative integer and fits within the range of a 32-bit signed integer.

Example 1:

n = 5

The coins can form the following rows:
¤
¤ ¤
¤ ¤

Because the 3rd row is incomplete, we return 2.
Example 2:

n = 8

The coins can form the following rows:
¤
¤ ¤
¤ ¤ ¤
¤ ¤

Because the 4th row is incomplete, we return 3.

*/
#include <iostream>
using namespace std; 
int arrangeCoins(int n) 
{
    if(n<=0){
        return 0;
    }
    int count =0 ;
    int result;
    while(n>0)
    {   
        if(n<count){
            count=n;
            n=0; 
        }
        else
        {
            n=n-count;
            result=count;    
        }
        count++; 
    } 
    return result;  
}
int main()
{
    int n;
    cin>>n ;
    cout<<arrangeCoins(n)<<endl ;

}
