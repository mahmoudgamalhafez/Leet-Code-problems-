/* 
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
Example 4:

Input: s = "([)]"
Output: false
Example 5:

Input: s = "{[]}"
Output: true
 

Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.
*/
#include <iostream>
#include <string>

#include <stack>
 
using namespace std; 
/*
bool isValid(string s)
{
        vector<char> buffer ;
        int n =s.length() ;
        if(n<=1)
            return false;

        if(s[0]==')'||s[0]==']'||s[0]=='}')
            return false;
        int i =1;
        buffer.push_back(s[0]) ;
        while(i<n)
        {
            cout<<buffer[i]<<endl;
            if(s[i-1]=='('&&s[i]==')')
            {
                buffer.erase(buffer.begin()+i-1);
                buffer.push_back(s[i+1]);
                i++;
                cout<<"1"<<endl;
            }
            else if (s[i-1]=='(' &&s[i]!=')')
            {
                buffer.push_back(s[i]);  
                cout<<"2"<<endl;  
            }
            else if (s[i-1]=='[' &&s[i]==']')
            {
                buffer.erase(buffer.begin()+i-1); 
                buffer.push_back(s[i+1]); 
                i++;
                cout<<"3"<<endl; 
            }
            else if (s[i-1]=='[' &&s[i]!=']')
            {
                buffer.push_back(s[i]);
                cout<<"4"<<endl;    
            }
            else if (s[i-1]=='{' &&s[i]=='}')
            {
                buffer.erase(buffer.begin()+i-1);
                buffer.push_back(s[i+1]); 
                i++ ;
                cout<<"5"<<endl; 
            }
            else if (s[i-1]=='{' &&s[i]!='}')
            {
                buffer.push_back(s[i]);
                cout<<"6"<<endl;    
            }            
            i++;
          
        }
        cout<<"7"<<endl;
        if(buffer.size()==0){
            return true;
        }else
        {
            return false;
        }       
}
*/
bool isValid(string s)
{
    stack<char> buf;
    for(auto ch : s) 
    {
       if (ch=='{' || ch =='[' || ch=='(' ) {
            buf.push(ch);
        } 
        else if (ch=='}' || ch ==']' || ch == ')' )
        {
            if (buf.empty()) return false;
                        char sch = st.top();
            if ( (sch=='{' && ch =='}') || (sch=='[' && ch==']') || (sch=='(' && ch==')' ) ){
                st.pop();
            }else {
                return false;
            }
            

        }
        else{
            return false;
        }
    return buf.empty();
}

int main()
{
   cout<< isValid("()[]") <<endl;
}