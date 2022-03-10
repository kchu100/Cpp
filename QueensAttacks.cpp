#include<iostream>
using namespace std;
//Instructions
//You will be given a square chess board with one Queen and a number of obstacles placed on it. 
//Determine how many squares the Queen can attack.
//Queen stands on an NxN chessboard. Queen can attack in any of the eight directions.
//Queen can go left-right, top-bottom. Rows and Columns numberd from 1 to n
//Queen can also go four diagonals.
//There will be obstacles that block the Queen's attacks.
//Queen can not go through any obstacle.

//Method
//calculate the total of squares queen can attack
//in all 8 directions, find the closest obstacle relative to the queen
//calculate the distance between queen and furthest square 
//calculate the distance between queen and obstacle
//subtact both values to get the total number of squares queen can NOT attack
//subtact the total squares queen CAN attack to the total squares queen can NOT attack
int totalattacks(int n, int rq, int cq)
{
    //horizontal/vertical movement
    int total = (n - 1) * 2; 
    //diagonal movement
    int top_left = min(n - rq, cq - 1);
    int bottom_left = min(rq, cq) - 1;
    int top_right = n - max(cq, rq);
    int bottom_right = min(rq - 1, n - cq);
        
    total = total + top_left + top_right + bottom_left + bottom_right;
    return total;
}

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

int queensAttack(int n, int k, int r_q, int c_q, vector<vector<int>> obstacles) 
{
    int total = totalattacks(n, r_q, c_q), sum = 0;
    int left = 0, right = n + 1, top = n + 1, bottom = 0;
    int top_left[2], top_right[2], bottom_left[2], bottom_right[2];
    
    top_left[0] = n + 1, top_left[1] = 0;
    top_right[0] = top_right[1] = n + 1;
    bottom_left[0] = bottom_left[1] = 0;
    bottom_right [0] = 0, bottom_right[1] = n + 1;
    
    for(int i = 0; i < obstacles.size(); i++)
    {
        int row = obstacles[i][0], column = obstacles[i][1];
        //ROW
        if(r_q == row)
        {
            //left
            if(c_q > column)
            {
                if(left < column)
                    left = column;
            }
            //right
            else 
            {
                if(right > column)
                    right = column;
            }
        }
        //COLUMN
        else if(c_q == column)
        {
            //bottom
            if(r_q > row)
            {
                if(bottom < row)
                    bottom = row;
            }
            //top
            else
            {
                if(top > row)
                    top = row;
            }
        }
        //DIAGONAL
        else if(abs(column - c_q) == abs(row - r_q))
        {
            //top left
            if(r_q < row && c_q > column)
            {
                if(top_left[0] > row && top_left[1] < column)
                {
                    top_left[0] = row;
                    top_left[1] = column;
                }
            }
            //top right
            else if(r_q < row && c_q < column)
            {
                if(top_right[0] > row && top_right[1] > column)
                {
                    top_right[0] = row;
                    top_right[1]  = column;
                }
            }
            //bottom left
            else if(r_q > row && c_q > column)
            {
                if(bottom_left[0] < row && bottom_left[1] < column)
                {
                    bottom_left[0] = row;
                    bottom_left[1] = column;
                }
            }
            //bottom right
            else //if(r_q > row && c_q < column)
            {
                if(bottom_right[0] < row && bottom_right[1] > column)
                {
                    bottom_right[0] = row;
                    bottom_right[1] = column;
                }
            }
        }
    }
    //an obstacle found at the furthest square to the right of queen
    if(right == n)
        right = 1;    
    //no obstacle in the same row
    else if(right == n + 1)
        right = 0;
    else
    {
        int temp = n + 1 - c_q; //distance between queen and furthest square
        int temp1 = right - c_q; //distance between queen and obstacle
        right = temp - temp1;
    }
    
    //an onstalce found at the furthest square above queen
    if(top == n)
        top = 1;
    //no obstacle in the same column
    else if(top == n + 1)
        top = 0;
    else
    {
        int temp = n + 1 - r_q;
        int temp1 = top - r_q;
        top = temp - temp1;
    }
    
    int diagonalsum = 0;
    if(top_left[0] != n + 1)
        diagonalsum += cal_topleft(n, r_q, c_q, top_left);
        
    if(top_right[1] != n + 1)
        diagonalsum += cal_topright(n, r_q, c_q, top_right);
        
    if(bottom_left[0] != 0)
        diagonalsum += cal_botleft(n, r_q, c_q, bottom_left);
        
    if(bottom_right[1] != n + 1)
        diagonalsum += cal_botright(n, r_q, c_q, bottom_right);

    sum = left + right + bottom + top + diagonalsum;
    return total - sum;
}













