int Solution::coverPoints(vector<int> &A, vector<int> &B) {
  int n=A.size();
  int dist = 0;
  for (int i=1;i<n;i++)
    dist+=max (fabs (A[i]-A[i-1]), fabs (B[i]-B[i-1]))
    return dist;
}
