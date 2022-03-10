int cal_topleft(int n, int r_q, int c_q, int top_left[])
{
    int max[2], sum;
    
    max[0] = top_left[0], max[1] = top_left[1];
    //finding out the furthest square queen can attack
    while(max[0] < n && max[1] > 1)
    {
        max[0]++;
        max[1]--;
    }
    
    if(top_left[0] == max[0] && top_left[1] == max[1])
        sum = 1;
    else
    {
        int temp, temp1;
        //queen's spot - furthest square queen can attack
        temp = abs(r_q - max[0]) + 1;
        //obstacle's spot - queen
        temp1 = abs(r_q - top_left[0]);
        
        sum = temp - temp1;
    }
    
    return sum;
}
