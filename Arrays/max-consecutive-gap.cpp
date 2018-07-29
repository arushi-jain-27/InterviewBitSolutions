vector <int> counting (vector<int> &a, int expo)
{
    int n=a.size();
    vector <int> count (10,0);
    for (int i=0;i<n;i++)
    count[(a[i]/expo)%10]++;
    for (int i=1;i<10;i++)
    count[i]+=count[i-1];
    vector <int> output (n, 0);
    for (int i=n-1;i>=0;i--)
    {
        output[count[(a[i]/expo)%10]-1]=a[i];
        count[(a[i]/expo)%10]--;
    }
    a=output;
    return a;

}
vector <int> radix (vector<int> &a)
{
    int n=a.size();
    int maxi=INT_MIN;
    for (int i=0;i<n;i++)
    maxi=max(maxi, a[i]);
    int dig=0;
    while (maxi)
    {
        dig++;
        maxi/=10;
    }
    for (int i=0;i<dig;i++)
    a=counting (a, pow(10,i));
    return a;

}

int Solution::maximumGap(const vector<int> &a) {

    vector <int> b=a;
    int maxi=0;
    b=radix(b);

    for (int i=0;i<b.size()-1;i++)
    maxi=max (maxi, b[i+1]-b[i]);
    return maxi;

}
