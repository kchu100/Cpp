/*
Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. 
Then print the respective minimum and maximum values as a single line of two space-separated long integers.
*/
void miniMaxSum(vector<int> arr) 
{
    long min = arr[0], max = arr[0], sum = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    //cout << Minimum << Maximum
    cout << sum - max << ' ' << sum - min;
}
