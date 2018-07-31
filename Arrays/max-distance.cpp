int Solution::maximumGap(const vector<int> &a) {
   int maxi=0,i=0,j=0, n=a.size();
   vector <int> b (n, 0), c(n,0);
   b[0]=a[0];
   c[n-1]=a[n-1];
   for (int i=1;i<n;i++)
   b[i]=min (b[i-1], a[i]);
   for (int i=n-2;i>=0;i--)
   c[i]=max (c[i+1], a[i]);
   while (i<n && j<n)
   if (b[i]<=c[j])
   {
       maxi=max (maxi, j-i);
       j++;
   }
   else
   i++;
   return maxi;

}
