string Solution::convertToTitle(int A) {

   int r;
   string s="";
   while (A>26)
   {

       r=A%26;
       A=A/26;
       if (r==0)
       {
           r=26;
           A--;
       }
       s=char(r+64)+s;
   }
   s=char(A+64)+s;
   return s;
}
