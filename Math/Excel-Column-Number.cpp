int Solution::titleToNumber(string A) {
   int sum=0;
   reverse (A.begin(), A.end());
   for (int i=0;i<A.size();i++)
   sum+=(A[i]-64)*pow (26, i);
   return sum;
}
