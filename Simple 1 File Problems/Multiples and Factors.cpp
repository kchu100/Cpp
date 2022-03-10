//Determine how many numbers exist that are multiples of a and factors of b
int getTotalX(vector<int> a, vector<int> b) 
{
    int result = 0;
    int lcm = a[0], gcd = b[0];
    
    //get the LCM of a
    for(int i = 1; i < a.size(); i++)  
    {  
        lcm = LCM(lcm, a[i]);
    }
    
    //get the LCM of b
    for(int i = 1; i < b.size(); i++)
    {
        gcd = GCD(gcd, b[i]);
    }
    
    //count the multiples of LCM that divide the GCD
    int m = 0;
    while(m <= gcd)
    {
        m += lcm;
        if(gcd % m == 0)
            result++;
    }
    
    return result;
}
