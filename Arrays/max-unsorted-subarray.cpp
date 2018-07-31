vector<int> Solution::subUnsort(vector<int> &a) {
    int start=-1, end=-1, n=a.size(),maxi=INT_MIN, mini=INT_MAX;
    for (int i=n-1;i>0;i--)
    if (a[i]<a[i-1])
    {
        end=i;
        break;
    }
    for (int i=0;i<n-1;i++)
    if (a[i]>a[i+1])
    {
        start=i;
        break;
    }
    if (start==-1 && end==-1)
    {
        vector <int> pos;
        pos.push_back (-1);
        return pos;
    }
    for (int i=start;i<=end;i++)
    {

        mini=min(a[i], mini);
    }
    for (int i=0;i<start;i++)
    if (a[i]>mini)
    {
        start=i;
        break;
    }
    for (int i=start;i<=end;i++)
    {
        maxi=max(a[i], maxi);

    }
    for (int i=n-1;i>end;i--)
    if (a[i]<maxi)
    {
        end=i;
        break;
    }
    vector <int> pos;
    pos.push_back (start);
    pos.push_back (end);
    return pos;
}
