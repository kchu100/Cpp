/*
Consider a sequence of numbers a0, a1, ..., an, in which an element is equal to the sum of squared digits of the previous element. 
The sequence ends once an element that has already been in the sequence appears again.

Given the first element a0, find the length of the sequence.

Exaample: 
For a0 = 16, the output should be
solution(a0) = 9.

Here's how elements of the sequence are constructed:

a0 = 16
a1 = 12 + 62 = 37
a2 = 32 + 72 = 58
a3 = 52 + 82 = 89
a4 = 82 + 92 = 145
a5 = 12 + 42 + 52 = 42
a6 = 42 + 22 = 20
a7 = 22 + 02 = 4
a8 = 42 = 16, which has already occurred before (a0)
Thus, there are 9 elements in the sequence.

For a0 = 103, the output should be
solution(a0) = 4.

The sequence goes as follows: 103 -> 10 -> 1 -> 1, 4 elements altogether.
*/
int squareDigitsSequence(int a0) 
{
    int result = 1, sum = 0, temp = a0;
    vector<int> n;
    n.push_back(a0);
    while(1)
    {
        while(temp > 0)
        {
            int mod = temp % 10;
            sum += pow(mod, 2);
            temp = temp / 10;
        }
        result++;
        for(int i = 0; i < n.size(); i++)
            if(n[i] == sum)
                return result;
        temp = sum;
        n.push_back(sum);
        sum = 0;
    }
}
