int Solution::canCompleteCircuit(const vector<int> &a, const vector<int> &b) {
    int i, n=a.size(),sum=a[0]-b[0], start=0, end=1;

    while (start!=end || sum<0)
    {
        while (start!=end && sum<0)
        {
            sum-=a[start]-b[start];
            start=(start+1)%n;
            if (start==0)
            return -1;
        }
        sum+=a[end]-b[end];
        end=(end+1)%n;
    }

    return start;


}
