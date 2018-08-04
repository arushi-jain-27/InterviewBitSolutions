vector <bool> sieve (int A)
{
    vector <bool> a ;
    for (int i=0;i<=A;i++)
    a.push_back(true);
    a[0]=false;
    a[1]=false;
    for (int i=2;i<=A;i++)
    if (a[i])
    {
        for (int j=2*i; j<=A;j+=i)
        a[j]=false;
    }
    return a;
}
vector<int> Solution::primesum(int A) {
    vector <bool> b=sieve (A);

    for (int i=2;i<=A/2;i++)
    if (b[i] && b[A-i])
    {
        vector <int> ans;
        ans.push_back (i);
        ans.push_back (A-i);
        return ans;
    }

}
