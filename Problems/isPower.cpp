/*
Determine if the given number is a power of some non-negative integer.
true: if n can be represented in the form ab (a to the power of b) 
      where a and b are some non-negative integers and b ≥ 2, 
      false otherwise.
*/
bool isPower(int n) 
{
    if(n == 1)
        return true;
        
    for(int a = 1; a <= n / 2; a++)
        for(int b = 2; b <= n / 4; b++)
            if(pow(a, b) == n)
                return true;
    return false;
}
