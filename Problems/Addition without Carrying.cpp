/*
A little child is studying arithmetic. They have just learned how to add two integers, written one below another, column by column. 
But the child always forgets about the important part - carrying.

Given two integers, your task is to find the result that the child will get.
*/
int solution(int param1, int param2) 
{
    if(param1 == 0 || param2 == 0)
        return std::max(param1, param2);
        
    int d1 = countdigits(param1), d2 = countdigits(param2), sum = 0;
    for(int i = 0; i <= std::min(d1, d2); i++)
    {
        int temp = (param1 % 10) + (param2 % 10);
        param1 /= 10; param2 /= 10;
        if(temp >= 10)
            temp %= 10;
        sum += pow(10, i) * temp;
    }
    return sum;
}
