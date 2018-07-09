vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int>> a;
    vector <int> r;
    int n=A, k=1, i=0, j=0, row=0, col=0;
    for (int i=0;i<n;i++)
    r.push_back(0);
    for (int i=0;i<n;i++)
    a.push_back (r);
    while (k<=n*n)
    {
        while (j<n-col)
        {
            a[i][j]=k;
            k++;
            j++;
            if (k>n*n)
            return a;
        }
        j--;
        i++;
        while (i<n-row)
        {
            a[i][j]=k;
            k++;
            i++;
            if (k>n*n)
            return a;
        }
        i--;
        j--;
        while (j>=col)
        {
            a[i][j]=k;
            k++;
            j--;
            if (k>n*n)
            return a;
        }
        j++;
        i--;
        row++;
         while (i>=row)
        {
            a[i][j]=k;
            k++;
            i--;
            if (k>n*n)
            return a;
        }
        i++;
        j++;
        col++;


    }
    return a;



}
