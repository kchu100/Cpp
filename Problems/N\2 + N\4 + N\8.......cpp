/*
Compute N/1 + N/2 + N/4 + N/8 + N/16.... series 
Example:
N = 35
35 + 35/2 + 35/4 + 35/8 + 35/16 + 35/32 = 35 + 17 + 8 + 4 + 2 + 1 = 67
*/
int computeSeries(int n)
{
    int divisor = 1;
    /*traditional loop
    int result = 0;
    while(divisor < n)
    {
        result += n/divisor;
        divisor *= 2;
    }
    return result;
    */
    
    /*using Recursion
    divisor *= 2;
    if(divisor > n)
        return n;
    return n + computeSeries(n/divisor);
    */
}
