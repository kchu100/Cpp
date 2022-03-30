/*
Determine whether the given string can be obtained by one concatenation of some string to itself.

Example:
For inputString = "tandemtandem", the output should be
solution(inputString) = true;

For inputString = "qqq", the output should be
solution(inputString) = false;

For inputString = "2w2ww", the output should be
solution(inputString) = false.
*/
bool concatenation(string inputString) 
{
    string s = "", temp = ""; 
    int repeats = 0, i = 0;
    while(i < inputString.length() && inputString[i] != s[0])
    {
        s += inputString[i];
        i++;
    }
   
    for(i = s.length(); i < inputString.length(); i++)
    {
        temp += inputString[i];
        if(temp == s)
        {
            repeats++;
            temp = "";
        }
    }
    
    if(inputString.length() % 2 == 1)
        return false;
    else if(repeats % 2 == 1)
    {
        int j = s.length(), s1 = 0;
        while(j < inputString.length())
        {
            if(inputString[j] != s[s1])
                return false;
            j++;

            if(s1 == s.length() - 1)
                s1 = 0;
            else
                s1++;
        }
        return true;
    }
    else
        return false;
}
