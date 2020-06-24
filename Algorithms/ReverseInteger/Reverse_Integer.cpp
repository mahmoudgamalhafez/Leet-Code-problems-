/* 
Given a 32-bit signed integer, reverse digits of an integer.

Example 1:

Input: 123
Output: 321
Example 2:

Input: -123
Output: -321
Example 3:

Input: 120
Output: 21
*/

#include <iostream>

using namespace std; 
#define INT_MAX     2147483647
#define INT_MIN     (-INT_MAX - 1)
 
int reverse(int x) 
{

  int y =0;
  int temp ;  
  while(x!=0)
  {
    temp=x%10;
    x=x/10;
    if (y > INT_MAX/10 || y < INT_MIN/10){
             return 0;
    }
    y=y*10+temp;
  }
  return y; 
}
// int reverse(int x) 
// {
//   string str="";
//   bool flag=false;
//   if(x<0){
//     x*=-1;
//     flag=true;
//   }
//   while(x!=0)
//   {
//     int temp=x%10;
//     x=x/10;
//     str+=to_string(temp);
//   }
//   int y=stoi(str);
//   if(flag){
//     y=y*-1;
//   }
//   return y ;
// }
int main()
{
  int i = -123 ;
  cout<< reverse(i) <<endl ;
  i = 426;
  cout<< reverse(i) <<endl ;
  
}
