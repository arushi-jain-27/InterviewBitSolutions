int Solution::power(string str) {
  int l=str.size(), start=0;
  if (str=="1" )
  return 0;
  if (str=="0")
  return 0;
  while (true)
  {
      if (str[l-1]=='1' && l>1)
      return 0;
      if (str[l-1]=='3' || str[l-1]=='5' || str[l-1]=='7' || str[l-1]=='9' )
      return 0;
      int carry=0;

      for (int j=start;j<l;j++)
      {
          int b=str[j]-48;
          //cout<<b;
          if (carry)
          b+=10;
          str[j]=char(b/2+48);
          carry=b%2;
      }

      if (str[start]=='0')
      start++;
      if (str[l-1]=='1' && start==l-1)
      return 1;


  }
 // return 1;


}
