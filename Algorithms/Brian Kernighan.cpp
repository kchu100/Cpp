//Brian Kernighan's algorithm in counting how many set bits
//if count == 1, number is a power of 2
//Runtime: O(n)
int Brian_Kernighan(long n)
{
    int count = 0;
    while(n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
/* Reduce number to next power of 2
    if(Brian_Kernighan(n) != 1)
    {
        int powof2;
        for(int i = n; i >= 1; i--)
        {
            if((i & (i - 1)) == 0)
            {
                powof2 = i;
                break;
            }   
        }
        n = n - powof2;
    }
*/
