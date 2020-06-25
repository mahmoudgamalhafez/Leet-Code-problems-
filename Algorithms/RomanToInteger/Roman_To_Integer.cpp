/* 
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, two is written as II in Roman numeral, just two one's added together. Twelve is written as, XII, which is simply X + II. The number twenty seven is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.

*/
#include <iostream>
using namespace std; 

int romanToInt(string s) 
{
    int length= s.length();
    int num=0;
    for(int i=0;i<length;i++){
        if(s[i]=='I'){
            switch (s[i+1])
            {
            case 'V':
                /* code */
                num+=4;
                i++;
                break;
            case 'X':
                /* code */
                i++;
                num+=9;
                break;            
            default:
                num+=1;
                break;
            }            
       }
       else if (s[i]=='X')
       {
           /* code */
            switch (s[i+1])
            {
            case 'L':
                /* code */
                num+=40;
                i++;
                break;
            case 'C':
                /* code */
                num+=90;
                i++;
                break;            
            default:
                num+=10;
                break;
            } 
                       
       }
       else if (s[i]=='C')
       {
           /* code */
            switch (s[i+1])
            {
            case 'D':
                /* code */
                num+=400;
                i++;
                break;
            case 'M':
                /* code */
                num+=900;
                i++;
                break;            
            default:
                num+=100;
                break;
            }           
       }
       else
       {
         switch (s[i])
         {
            case 'V'/* constant-expression */:
                /* code */
                num+=5;
                break;
            case 'L'/* constant-expression */:
                /* code */
                num+=50;
                break;
            case 'D'/* constant-expression */:
                /* code */
                num+=500;
                break;
            case 'M'/* constant-expression */:
                /* code */
                num+=1000;
                break;
            default:
                break;
         }  
       }
              
    }

    return num;    
}

int main()
{
    cout<< romanToInt("MCMXCIV")<<endl ;

}