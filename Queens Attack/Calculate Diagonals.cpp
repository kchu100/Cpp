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

int cal_topright(int n, int r_q, int c_q, int top_right[])
{
    int max[2], sum;
    
    max[0] = top_right[0], max[1] = top_right[1];
    //finding out the furthest square queen can attack
    while(max[0] < n && max[1] < n)
    {
        max[0]++;
        max[1]++;
    }
    
    if(top_right[0] == max[0] && top_right[1] == max[1])
        sum = 1;
    else
    {
        int temp, temp1;
        //queen's spot - furthest square queen can attack
        temp = abs(r_q - max[0]) + 1;
        //obstacle's spot - queen
        temp1 = abs(r_q - top_right[0]);
        
        sum = temp - temp1;
    }
    
    return sum;
}

int cal_botleft(int n, int r_q, int c_q, int bottom_left[])
{
    int max[2], sum;
    
    max[0] = bottom_left[0], max[1] = bottom_left[1];
    //finding out the furthest square queen can attack
    while(max[0] > 1 && max[1] > 1)
    {
        max[0]--;
        max[1]--;
    }
    
    if(bottom_left[0] == max[0] && bottom_left[1] == max[1])
        sum = 1;
    else
    {
        int temp, temp1;
        //queen's spot - furthest square queen can attack
        temp = abs(r_q - max[0]) + 1;
        //obstacle's spot - queen
        temp1 = abs(r_q - bottom_left[0]);
        
        sum = temp - temp1;
    }
    
    return sum;
}

int cal_botright(int n, int r_q, int c_q, int bottom_right[])
{
    int max[2], sum;
    
    max[0] = bottom_right[0], max[1] = bottom_right[1];
    //finding out the furthest square queen can attack
    while(max[0] > 1 && max[1] < n)
    {
        max[0]--;
        max[1]++;
    }
    
    if(bottom_right[0] == max[0] && bottom_right[1] == max[1])
        sum = 1;
    else
    {
        int temp, temp1;
        //queen's spot - furthest square queen can attack
        temp = abs(r_q - max[0]) + 1;
        //obstacle's spot - queen
        temp1 = abs(r_q - bottom_right[0]);
        
        sum = temp - temp1;
    }
    
    return sum;
}
