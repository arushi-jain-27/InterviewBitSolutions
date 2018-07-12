vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector <vector<int>> a;
    int n=A.size();
    vector <int> row;
    int i=0, j=0;
    for (int sum=0;sum<2*n-1;sum++)
    {
        for (int i=max (0, sum-n+1);i<=min (sum, n-1);i++)
        {
            row.push_back (A[i][sum-i]);
        }
        a.push_back (row);
        row.clear();
    }
      return a;

}
