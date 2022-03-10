//in a rectangle, N rows--M columns, count the number of squares a diagonal would touch
int solution(int n, int m) 
{
    int black;
    if(n == m)
        black = (n * 3) - 2;
    else if(n == 1 || m == 1)
        black = n * m;
    else
        black = m + n + gcd(n, m) - 2;
    return black;
}
