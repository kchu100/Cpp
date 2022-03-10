//Runtime: O(nlog(n))
void merge(int A[], int first, int middle, int last)
{
	int n1 = middle - first + 1;
	int n2 = last - middle;

	int Left[10000], Right[10000];

	//Separates the main array into two left and right subarrays
	for (int a = 0; a <= n1; a++)
		Left[a] = A[first + a];
	for (int b = 0; b <= n2; b++)
		Right[b] = A[middle + 1 + b];

	int leftbegin = 0; //Index for left subarray
	int rightbegin = 0; // Index for right subarray
	int i = first; //Index of the merged subarray

	//while loop that copies the smaller item from subarray to the main array
	while (leftbegin < n1 && rightbegin < n2)
	{
		//if the first number is less than the next number -- in the left subarray
		if (Left[leftbegin] <= Right[rightbegin])
		{
			A[i] = Left[leftbegin];
			leftbegin++;
		}

		else //right subarray
		{
			A[i] = Right[rightbegin];
			rightbegin++;
		}

		i++;
	}

	//Copies leftover elements from left subarray, if necessary, into the main array
	while (leftbegin < n1)
	{
		A[i] = Left[leftbegin];
		leftbegin++;
		i++;
	}

	//Copies leftover elements from right subarray, if necessary, into the main array
	while (rightbegin < n2)
	{
		A[i] = Right[rightbegin];
		rightbegin++;
		i++;
	}

}


void mergesort(int A[], int first, int last)
{
	if (first < last)
	{
		//Midpoint of the array
		int middle = first + (last - first) / 2;

		//Sorts the left half
		mergesort(A, first, middle);

		//Sort the right half
		mergesort(A, middle + 1, last);

		merge(A, first, middle, last);
	}
}
