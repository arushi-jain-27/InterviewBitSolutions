int Solution::reverse(int A) {
    long long int sum=0;
    while (A)
    {
        sum=sum*10+(A%10);
        A/=10;
        if (sum>INT_MAX || sum<INT_MIN )
        return 0;
    }
    return sum;
}
