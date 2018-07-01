vector<int> Solution::plusOne(vector<int> &A) {
    int n =A.size();
    reverse(A.begin(), A.end());
    int carry=1;
    for (int i=0;i<n;i++)
    {
        A[i]+=carry;
        if (A[i]>9)
        {
            carry=1;
            A[i]-=10;

        }
        else
        {
            carry=0;
            break;

        }
    }
    if (carry==1)
        A.push_back(carry);
    reverse (A.begin(), A.end());
    while (A[0]==0)
    A.erase(A.begin());
    return A;
}
