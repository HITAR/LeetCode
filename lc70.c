int climbStairs(int n)
{
    int onestep = 2,twostep = 1,result = 0;
    if(n>-1 && n<3)
        return n;
    for(int i=0;i<n-2;i++)
    {
        result = onestep + twostep;
        twostep = onestep;
        onestep = result;
    }
    return result;
}