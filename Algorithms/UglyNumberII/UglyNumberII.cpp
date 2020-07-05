/* 264. Ugly Number II
Medium

1779

113

Add to List

Share
Write a program to find the n-th ugly number.

Ugly numbers are positive numbers whose prime factors only include 2, 3, 5. 

Example:

Input: n = 10
Output: 12
Explanation: 1, 2, 3, 4, 5, 6, 8, 9, 10, 12 is the sequence of the first 10 ugly numbers.
*/
#include <iostream>

bool isUgly(int num)
{
    if(num<=0)
        return false;
    num = maxDivide(num, 2); 
    num = maxDivide(num, 3); 
    num = maxDivide(num, 5); 

    return (num == 1)? 1 : 0;         
}
int maxDivide(int a, int b) 
{ 
  while (a%b == 0) 
   a = a/b;  
  return a; 
}  

int nthUglyNumber1(int n) 
{
    int i=1;
    while(n>0)
    {
        if(i%2==0||i%3==0||i%5==0||i==1 ){
            if(isUgly(i))
            {
                n--;
            }
        }
        i++;
    }
    return i;    
}
int nthUglyNumber2(int n) 
{
    unsigned int uglyNum[n];
    int  i2 = 0, i3 = 0, i5 = 0; 
    int  next_multiple_of_2 = 2; 
    int next_multiple_of_3 = 3; 
    int next_multiple_of_5 = 5; 
    int next_ugly_num = 1;
    uglyNum[0]=1;
    for(int i=1;i<n;i++)
    {
        next_ugly_num = min(next_multiple_of_2, 
                           min(next_multiple_of_3, 
                               next_multiple_of_5)); 
        uglyNum[i]=next_ugly_num;
        if(next_ugly_num==next_multiple_of_2)
        {
            i2++;
            next_multiple_of_2=uglyNum[i2]*2;
        }
        if(next_ugly_num==next_multiple_of_3)
        {
            i3++;
            next_multiple_of_3=uglyNum[i3]*3;
        }   
        if(next_ugly_num==next_multiple_of_5)
        {
            i5++;
            next_multiple_of_5=uglyNum[i5]*5;
        }
    } 
    return next_ugly_num;
}