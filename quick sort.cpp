//Runtime: O(n^2)
int QS_Partition(int a[], int first, int last)
{
    int i = first - 1;
    int pivot = last;
    for (int j = first; j <= last - 1; j++)
      if(a[j] <= pivot)
      {
        i++;
        swap(a[i], a[j]);
      }
    swap(a[i +1], a[last]);
    return (i + 1);
}

void QuickSort(int a[], int first, int last)
{
    if(first < last)
    {
      int q = QS_Partition(a, first, last);
      QuickSort(a, first, q - 1);
      QuickSort(a, q + 1, last);
	  }
}
