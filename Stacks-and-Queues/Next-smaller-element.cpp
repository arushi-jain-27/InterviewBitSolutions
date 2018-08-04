vector<int> Solution::prevSmaller(vector<int> &a) {
      stack<int> s;
      int temp;
      for (int i=0;i<a.size();i++)
      {
          while (!s.empty() && s.top()>=a[i])
          s.pop();
          if (s.empty())
          temp=-1;
          else
          temp=s.top();
          s.push(a[i]);
          a[i]=temp;
      }

     return a;


}
