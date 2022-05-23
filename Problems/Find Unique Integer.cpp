int Uniqueinteger(vector<int> a) 
{
    sort(a.begin(), a.end());
    int uniquesum = 0, sum = 0;
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] != a[i + 1])
            uniquesum += a[i];
        sum += a[i];
    }
    return uniquesum * 2 - sum;
}
