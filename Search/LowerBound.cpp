//STL -- get the index of the desired value in a sorted vector
int lowerBound(vector<int> n, int m)
{
    vector<int>::iterator temp = lower_bound(n.begin(), n.end(), m);
    return temp - n.begin();
}
