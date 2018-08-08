int Solution::romanToInt(string A) {
   string s="IVXLCDM";
   vector <int> a = {1,5,10,50,100,500,1000};
   int sum=0,e;
   for (int i=0;i<A.size();i++)
   {
       int d= a[(s.find(A[i]))];
       if (d==1 && i<A.size()-1)
       {

            e= a[(s.find(A[i+1]))];
           if (e==5 || e==10)
           {
               sum=sum+e-d;
               i++;
           }

           else
           sum=sum+d;
       }
       else if (d==10 && i<A.size()-1)
       {

           e= a[(s.find(A[i+1]))];
           if (e==50 || e==100)
           {
               sum=sum+e-d;
               i++;
           }
           else
           sum=sum+d;
       }
       else if (d==100 && i<A.size()-1)
       {

            e= a[(s.find(A[i+1]))];
           if (e==500 || e==1000)
           {
               sum=sum+e-d;
               i++;
           }
           else
           sum=sum+d;
       }
       else
       {
           sum=sum+d;
       }
   }
   return sum;

}
