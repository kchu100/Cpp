//determine what character index to remove to make string a palindrome
int palindromeIndex(string s) 
{
    if(isPali(s) == true)
        return -1;
    else
    {
        for(int i = 0; i < s.length() / 2; i++)
        {
            int j = s.length() - i - 1;
            if(s[i] != s[j])
            {
                if(s[i] == s[j - 1] && s[i + 1] == s[j - 2])
                    return j;
                else if(s[i + 1] == s[j] && s[i + 2] == s[j - 1])
                    return i;
            }
        }
    }
    return -1;
}
