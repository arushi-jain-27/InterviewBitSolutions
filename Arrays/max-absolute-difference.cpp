struct num
{
    int b;
    int c;
};
int Solution::maxArr(vector<int> &A) {

   int n=A.size();
   num p[n];
   for (int i=0;i<n;i++)
   {

       p[i].b=(A[i]+i+1);
       p[i].c=(A[i]-i-1);
   }
   int maxb, minb, maxbp, minbp, maxc, minc, maxcp, mincp;
   maxb=p[0].b;
   minb=p[0].b;
   maxc=p[0].c;
   minc=p[0].c;
   for (int i=1;i<n;i++)
   {
       if (maxb<p[i].b)
       {
           maxb=p[i].b;
           maxbp=i;
       }
        if (maxc<p[i].c)
       {
           maxc=p[i].c;
           maxcp=i;
       }
        if (minb>p[i].b)
       {
           minb=p[i].b;
           minbp=i;
       }
        if (minc>p[i].c)
       {
           minc=p[i].c;
           mincp=i;
       }
   }
   if (maxb-minb>maxc-minc)
   return (maxb-minb);
   return (maxc-minc);

}
