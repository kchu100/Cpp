/*
We define super digit of an integer 'n' using the following rules:
Given an integer, we need to find the super digit of the integer.
If  has only  digit, then its super digit is.
Otherwise, the super digit of  is equal to the super digit of the sum of the digits of.+
Calculate the sum of digits of n * k initially
*/
  
int sumDigits(string x)
{
    int sum = 0;
    for(int i = 0; i < x.length(); i++)
        sum += (int)x[i] - 48;
    return sum;
}

int superDigit(int n, int k) 
{
    int x = n, sum = 0;
    sum = sumDigits(x);
    sum *= k;

    if(sum < 10)
    {
        return sum;
    }
    return superDigit(n, 1);
}
