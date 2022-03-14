void BubbleSort(int a[], int count)
{
	int temp; //dummy variable
	for(int x = 0; x < count; x++)
		for(int y = 0; y < count - 1; y++)
			if(a[y] >  a[y + 1]) //sorts in ascending order
			{
				temp = a[y];
				a[y] = a[y + 1];
				a[y + 1] = temp;
			}
}
