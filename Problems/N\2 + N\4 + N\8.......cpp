/*
Compute N/1 + N/2 + N/4 + N/8 + N/16.... series 
Example:
N = 35
35 + 35/2 + 35/4 + 35/8 + 35/16 + 35/32 = 35 + 17 + 8 + 4 + 2 + 1 = 67
*/
int computeSeries(int n)
{
    /*traditional loop
    int result = 0, divisor = 1;
    while(divisor < n)
    {
        result += n/divisor;
        divisor *= 2;
    }
    return result;
    */
    
    //using Recursion
    if(n / 2 == 0)
        return n;
    return n + computeSeries(n / 2);
    
}
