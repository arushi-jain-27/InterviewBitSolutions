string Solution::addBinary(string a, string b) {

     int i=a.size()-1,j=b.size()-1, sum=0, carry=0;

     string c="";
     while (i>=0 && j>=0)
     {
         int p=(int)a[i]-48, q=(int)b[j]-48;

         if (p<0)
         {
             i--;
             continue;
         }
         if (q<0)
         {
             j--;
             continue;
         }

         sum=p^q^carry;
         carry=p&q | q&carry | p&carry;
         c=char(sum+48)+c;

         i--;
         j--;
     }

     while (i>=0)
     {

         int p=a[i]-48;
         sum=p^carry;
         carry=p&carry;
         c=char(sum+48)+c;

         i--;

     }
     while (j>=0)
     {
         int p=b[j]-48;
         sum=p^carry;
         carry=p&carry;
         c=char(sum+48)+c;
         j--;

     }
     if (carry)
     c=char(carry+48)+c;
     return c;
}
