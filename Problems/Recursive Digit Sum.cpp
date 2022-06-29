/*
We define super digit of an integer 'n' using the following rules:
Given an integer, we need to find the super digit of the integer.
If  has only  digit, then its super digit is.
Otherwise, the super digit of  is equal to the super digit of the sum of the digits of.+
Calculate the sum of digits of n * k initially
Input is a string
*/
  
int sumDigits(string x)
{
    int sum = 0;
    for(int i = 0; i < x.length(); i++)
        sum += (int)x[i] - 48;
    return sum;
}

int superDigit(string n, int k) 
{
    int sum = 0;
    sum = sumDigits(n);
    sum *= k;

    if(sum < 10)
        return sum;

    return superDigit(to_string(sum), 1);
}

/*
//Input is an integer
int superDigit(int n, int k) 
{
    int sum = 0;
    sum = sumDigits(n);
    sum *= k;

    if(sum < 10)
    {
        return sum;
    }
    return superDigit(sum, 1);
}
*/
