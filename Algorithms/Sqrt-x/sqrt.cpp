/* 
Implement int sqrt(int x).

Compute and return the square root of x, where x is guaranteed to be a non-negative integer.

Since the return type is an integer, the decimal digits are truncated and only the integer part of the result is returned.

Example 1:

Input: 4
Output: 2
Example 2:

Input: 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since 
             the decimal part is truncated, 2 is returned.
*/
int mySqrt(int x) 
{   
 if (x == 0 || x == 1) 
    return x; 
    long result=1 ; int i=1 ;
    while(result<=x)
    {
        i++;
        result=(long)i*i;
    }
    return i-1;
    
}

int mySqrt(int x) 
{
    if(x==1||x==0)
        return 0 ;
    long square ;
    int high , mid ,low ;
    high =x ;
    low=1 ;
    while(low<=high)
    {
        mid=(low+high)/2 ;
        square=(long)mid*mid;
        if(square==x)
            return mid;
        else if (sqare<x)
        {
            /* code */
            low=mid+1;
        }else
        {
            high=mid-1;
        }
    }
    return mid ;

}
int mySqrt(int x) 
{
    if(x==1||x==0)
        return x ;
    long square ;
    int high , mid ,low ;
    high =x ;
    low=0 ;
    while(low<=high)
    {
        mid=(low+high)/2 ;
        square=(long)mid*mid;
        if(square==x)
            return mid;
        else if (square<x)
        {
            /* code */
            low=mid+1;
        }else
        {
            high=mid-1;
        }
    }
    if(square<x)
        return mid ;
    else
        return mid-1;
}

int main()
{

}