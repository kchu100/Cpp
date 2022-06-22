/*
Given two strings a and b, both consisting only of lowercase English letters, 
your task is to calculate how many strings equal to a can be constructed using only letters from the string b? 
Each letter can be used only once and in one string only.
*/
int stringsConstruction(string a, string b) 
{
    vector<int> indexalphabet(26); int result = 0; string t = "";
    for(int i = 0; i < b.length(); i++)
    {
        int temp = (((int)b[i] + 7) % 26);
        indexalphabet[temp]++;
    }
    
    for(int i = 0; i < a.length(); i++)
    {
        int temp = ((int)a[i] + 7) % 26;
        if(indexalphabet[temp] > 0)
        {
            indexalphabet[temp]--;
            t += a[i];
        }
        
        if(t == a)
        {
            result++;
            i = -1;
            t = "";
        }
        
    }
    return result;
}
