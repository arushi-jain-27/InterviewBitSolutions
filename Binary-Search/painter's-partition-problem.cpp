bool split(vector<int> &a, long long int min_time, int k) {
    int p=1;
    long long int curr_time=0;
    for (int i=0;i<a.size();i++)
    if (a[i]>min_time)
    return false;
    else
    {
        if (curr_time+a[i]>min_time)
        {
            curr_time=a[i];
            p++;
            if (p>k)
            return false;
        }
        else
        curr_time+=a[i];
    }

   return true;
}

int Solution::paint(int A, int B, vector<int> &C) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    //if (C.empty() || C.size()<A) return -1;
    long long int sum=0, result=INT_MAX;
    for (int i=0;i<C.size();i++)
    sum+=C[i];
    int start=0, end=sum;
    while (start<=end)
    {
        int mid=(start+end)/2;
        if (split (C, mid, A))
        {
            end=mid-1;
            if (result>mid)
            result=mid;

        }
        else
        start=mid+1;

    }

    return (((result)%10000003)*B)%10000003;

}

