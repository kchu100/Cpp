/*
Given a sorted integer array that does not contain any duplicates, return a summary of the number ranges it contains.
Example:
For nums = [-1, 0, 1, 2, 6, 7, 9], the output should be
solution(nums) = ["-1->2", "6->7", "9"].
*/

vector<string> solution(vector<int> nums) 
{
    vector<string> result;
    int n = nums.size();
    string temp;
    
    if(n == 0)
        return result;
    
    int start = nums[0], end, count = 1;
    for(int i = 1; i < n; i++)
    {
        end = nums[i];
        if(count > 1 && end - nums[i - 1] != 1)
        {
            temp = to_string(start) + "->" + to_string(nums[i - 1]);
            start = nums[i];
            result.push_back(temp);
            count = 1;
        }
        else if(end - nums[i - 1] == 1)
            count++;
        else 
        {
            result.push_back(to_string(nums[i - 1]));
            start = nums[i];
            count = 1;
        }
    }
    
    if(end - nums[n - 2] != 1)
    {
        result.push_back(to_string(nums[n - 1]));
    }
    else
    {
        temp = to_string(start) + "->" + to_string(end);
        result.push_back(temp);
    }
    
    return result;
}
