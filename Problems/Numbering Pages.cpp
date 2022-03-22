/*
Write a function to determine what the last page of the book is that you can number given the current page and numberOfDigits left. A page is considered numbered if it has the full number printed on it (e.g. if we are working with page 102 but have ink only for two digits then this page will not be considered numbered).

It's guaranteed that you can number the current page, and that you can't number the last one in the book.

Example:
For current = 1 and numberOfDigits = 5, the output should be
solution(current, numberOfDigits) = 5.
The following numbers will be printed: 1, 2, 3, 4, 5.

For current = 21 and numberOfDigits = 5, the output should be
solution(current, numberOfDigits) = 22.
The following numbers will be printed: 21, 22.

For current = 8 and numberOfDigits = 4, the output should be
solution(current, numberOfDigits) = 10.
The following numbers will be printed: 8, 9, 10.
*/
int pageNumber(int current, int numberOfDigits) 
{
    int num = 0;
    while(numberOfDigits >= num)
    {
        num = countDigits(current);
        numberOfDigits -= num;
        if(numberOfDigits - num >= 0)
            current++;
    }
    return current;
}
