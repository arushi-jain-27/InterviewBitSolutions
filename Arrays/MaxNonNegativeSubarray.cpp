vector<int> Solution::maxset(vector<int> &A) {

      vector <int> ans;
      long long int max_sum=0, max_start=0, max_end=0;
      long long int curr_sum=0, n=A.size(), curr_start=0, curr_end=0;
      for (int i=0; i<n;i++)
      {
          if (A[i]<0)
          {
              if (max_sum<curr_sum)
              {
                 max_sum=curr_sum;
                 max_end=curr_end;
                 max_start=curr_start;
              }
              else if (max_sum==curr_sum && max_end-max_start <curr_end-curr_start)
              {
                  max_end=curr_end;
                  max_start=curr_start;
              }
              curr_start=i+1;
              curr_end=i+1;
              curr_sum=0;
          }
          else
          {
              curr_sum+=A[i];
              curr_end++;
          }
      }
      if (max_sum<curr_sum)
              {
                 max_sum=curr_sum;
                 max_end=curr_end;
                 max_start=curr_start;
              }
      for (int i=max_start; i<max_end;i++)
      ans.push_back (A[i]);
      return ans;
}
