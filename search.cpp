//get the index of the desired value in a sorted arry
int BinarySearch(int A[], int first, int last, int value)
{
	int mid = (last - first + 1) / 2;
	if (value == mid)
        return mid;
	if (value < mid)
        return BinarySearch(A, first, mid, value);
	else
		return BinarySearch(A, mid + 1, last, value);
}

//STL -- get the index of the desired value in a sorted vector
int lowerBound(vector<int> n, int m)
{
    vector<int>::iterator temp = lower_bound(n.begin(), n.end(), m);
    return temp - n.begin();
}
