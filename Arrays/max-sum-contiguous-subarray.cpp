int Solution::maxSubArray(const vector<int> &A) {
    int n=A.size(),i, max=INT_MIN;
    for (i=0;i<n;i++)
    if (A[i]>=0)
    {
        break;

    }

    if (i==n)
    {
        for (int i=0;i<n;i++)
        if (max<A[i])
        max=A[i];

        return max;
    }
    int sum=0, max_sum=0;
    for (int i=0;i<n;i++)
    {
        sum+=A[i];
        if (sum<0)
            sum=0;
        if (max_sum<sum)
            max_sum=sum;

    }
    return max_sum;

}
