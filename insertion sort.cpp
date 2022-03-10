//Runtime O(n^2) in worst case
template<class T>
void InsertionSort(T a[], int count)
{
	int key, j;
	for(int i = 1; i < count; i++)
	{
      key = a[i]; //assigns second element as unsorted and the previous as sorted
      j = i -1; 
      while (j >= 0 && a[i] > key) //shifts all the elements to the right to create the position for unsorted element
      {
        a[j + 1] = a[j];
        j -= 1;
      }
      a[j + 1] = key; //inserts the unsorted element to its correct position
	 }
}
