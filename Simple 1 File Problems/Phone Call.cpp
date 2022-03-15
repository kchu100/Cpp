/*
Some phone usage rate may be described as follows:

  first minute of a call costs min1 cents,
  each minute from the 2nd up to 10th (inclusive) costs min2_10 cents
  each minute after 10th costs min11 cents.

You have s cents on your account before the call. What is the duration of the longest call (in minutes rounded down to the nearest integer) you can have?
*/
int solution(int min1, int min2_10, int min11, int s) 
{
    int minute = 0, rate = min1;
    while(s > 0)
    {
        minute++;
        if(minute == 2)
            rate = min2_10;
        else if(minute > 10)
            rate = min11;

        s -= rate;
        if(s < 0)
            minute--;
    }
    return minute;
}
