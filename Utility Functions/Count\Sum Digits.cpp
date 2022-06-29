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

int sumDigits(int x)
{
    int sum = 0;
    while(x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
