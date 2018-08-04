int Solution::search(const vector<int> &a, int b) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int start=0, end=a.size(),n=end, mid;
    if (n==0)
    return -1;

    while (start<end-1)
    {
        mid=(start+end)/2;
        if (a[mid]==b)
        return mid;
        if (a[mid]<b )
        {
            if (a[end-1]<b && a[mid]<a[end-1])
            {
                //start=0;
                end=mid;
            }
            else
            start=mid+1;

        }
        else
        {
            if (a[start]>b && a[mid]>a[start])
            {
                start=mid+1;
                //end=n;
            }
            else
            end=mid;
        }

    }
    if (a[start]==b)
    return start;
    if (a[end-1]==b)
    return end-1;
    return -1;




}
