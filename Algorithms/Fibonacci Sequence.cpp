int fibonacci(int n) 
{
    //1 1 2 3 5 8 13 21.....
    int fib = 0, previous = 1, previous1 = 0;
    for(int i= 0; i < n; i++)
    {
        fib = previous + previous1;
        previous1 = previous; 
        previous = fib;
        
    }
    return fib;
}
