int computeSeries(int n)
{
    int result, divisor = 1;
    divisor *= 2;
    if(divisor > n)
        return n;
    else
        return n + computeSeries(n/divisor);
}
