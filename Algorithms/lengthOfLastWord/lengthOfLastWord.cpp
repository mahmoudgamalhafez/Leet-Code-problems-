/* 
Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word (last word means the last appearing word if we loop from left to right) in the string.

If the last word does not exist, return 0.

Note: A word is defined as a maximal substring consisting of non-space characters only.

Example:

Input: "Hello World"
Output: 5
*/
#include <iostream>
#include <string>
using namespace std; 


int lengthOfLastWord(string s) 
{
    int length= s.size();
    int length_Of_last=0;
    int i=0;
    while(i<length)
    {
        if(s[i]!=' ')
            length_Of_last++;
        else
        {
            if(s[i+1]!=' '&&i!=length-1)
                length_Of_last=0;
        }
        i++;
    }
    return length_Of_last; 
}
int main()
{

}
