int countDigits(int n)
{
    int num = 0;
    while(n > 0)
    {
        num++;
        n /= 10;
    }
    return num;
}
