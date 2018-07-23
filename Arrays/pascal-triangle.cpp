vector<vector<int> > Solution::generate(int A) {

    vector<vector<int>> a;
    if (A==0)
    return a;
    vector <int> row;
    row.push_back(1);
    a.push_back(row);
    if (A==1)
    return a;
    row.push_back (1);
    a.push_back(row);
    if (A==2)
    return a;
    for (int i=2;i<A;i++)
    {
        row.push_back(1);
        for (int j=i-1;j>0;j--)
        row[j]+=row[j-1];
        a.push_back(row);
    }
    return a;

}
