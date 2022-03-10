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
