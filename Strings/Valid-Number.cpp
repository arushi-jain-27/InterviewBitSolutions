int Solution::isNumber(const string a) {
    bool e=false, dec=false;
    int i=0, n=a.size();
    while (a[n-1]==' ')
    n--;
    while ( i<n && a[i]==' ' )
    i++;

    if (a[i]=='+' || a[i]=='-')
    i++;
    if (i==n)
    return 0;
    for (;i<n;i++)
    if (isdigit(a[i]))
    continue;
    else if (a[i]=='.' && !dec &&i<n-1)
    {
        if (a[i+1]=='e')
        return 0;
        dec=true;

    }
    else if (a[i]=='e' && !e &&i<n-1)
    {
        e=true;
        dec=true;
        if (a[i+1]=='+' || a[i+1]=='-')
        {
            i++;
        }
    }
    else
   { //cout<<a[i]<<i;
       return 0;}
    return 1;
}
