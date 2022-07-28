//Runtime: O(n+k)
//n = number of elements, k = range of the elements
//it is most efficient if k < n
void countsort(int A[], int n)
{
	int freq[10000000], max = 0;
	
	//count how many times each element appears in array
	for(int i = 0; i < n; i++)
	{
		freq[A[i]]++;
		
		if(A[i] > max)
			max = A[i];
	}
	
	//add current element to the next and store answer to the next
	for(int i = 0; i <= max; i++)
        	freq[i + 1] += freq[i];
	
	//sorting occur
	int result[n];
	for(int i = 0; i < n; i++)
	{
		int temp = freq[A[i]];
		result[temp - 1] = A[i];
		freq[A[i]]--;
	}
}
