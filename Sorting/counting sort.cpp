//Runtime: O(nlog(n))
void countsort(int A[], int n)
{
	int freq[10000000], max = 0;
	
	//count how many times each element appears in array
	for(int i = 0; i < n; i++)
	{
		freq[A[i]] += 1;
		
		if(A[i] > max)
			max = A[i];
	}
	
	//add current element to the next and store answer to the next
	for(int i = 0; i <= max; i++)
        freq[i + 1] = freq[i] + freq[i + 1];
	
	//sorting occur
	int result[n];
	for(int i = 0; i < n; i++)
	{
		int temp = freq[A[i]];
		result[temp - 1] = A[i];
		freq[A[i]]--;
	}
}
