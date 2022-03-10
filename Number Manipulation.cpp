int reverseNum(int a)
{
    int rev = 0;
    while(a > 0)
    {
        rev = rev * 10 + a % 10;
        a = a / 10;
    }
    return rev;
}

//Greatest Common Divisor
int GCD(int a, int b)
{
	if(b == 0)
		return a;
	else
		return GCD(b, a % b);
}

//Least Common Multiple
int LCM(int a, int b)
{
    return (abs(a * b)) / GCD(a, b);
}
