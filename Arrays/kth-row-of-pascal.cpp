vector<int> Solution::getRow(int A) {
   vector <int> row;
   row.push_back(1);
   if (A==0)
   return row;
   row.push_back (1);
   if (A==1)
   return row;
   for (int i=2;i<=A;i++)
   {
       row.push_back(1);
       for (int j=i-1;j>0;j--)
       row[j]+=row[j-1];
   }
   return row;

}
