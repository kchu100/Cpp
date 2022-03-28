//This take O(sqrt(n)) time
int countDivisors(int n)
{
  int count = 0;
  for(int i = 1; i <= sqrt(n); i++)
  {
    if(n % i == 0)
    {
      //f divisors are equal count only one, otherswise count two.
      if(n / i == i)
        count++;
      else
        count += 2;
    }
  }
  return count;
}


/*
int countDivisors(int n)
{
  int count = 0;
  for(int i = 1; i <= n; i++)
    if(n % i == 0)
        count++;
  return count;
}
*/
