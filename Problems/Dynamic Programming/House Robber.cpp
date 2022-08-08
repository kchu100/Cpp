/*
You are planning to rob houses on a specific street, and you know that every house on the street has a 
certain amount of money hidden. The only thing stopping you from robbing all of them in one night is that 
adjacent houses on the street have a connected security system. The system will automatically trigger an alarm 
if two adjacent houses are broken into on the same night.

Given a list of non-negative integers nums representing the amount of money hidden in each house, 
determine the maximum amount of money you can rob in one night without triggering an alarm.

Example
For nums = [1, 1, 1], the output should be
solution(nums) = 2.

The optimal way to get the most money in one night is to rob the first and the third houses for a total of 2.
*/

int houseRobber(vector<int> nums) 
{
    int result;
    //conditions for smaller cases
    if(nums.empty())
        result = 0;
    else if(nums.size() == 1)
        result = nums[0];
    else if(nums.size() == 2)
        result = max(nums[0], nums[1]);
    
    //condition for larger cases
    else
    {
       int temp[nums.size()];
       temp[0] = nums[0];
       temp[1] = max(nums[0], nums[1]);
       for(int i = 2; i < nums.size(); i++)
       {
           //compare current element of nums + previous element of temp ---
            //---> current element of temp
           temp[i] = max(nums[i] + temp[i - 2], temp[i - 1]);
       }
       
       result = temp[nums.size() - 1];
    }
    return result;
}
