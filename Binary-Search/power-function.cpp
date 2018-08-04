long long int power (int x, int n, int d)
{
    if (n==0)
    return 1%d;
    if (n==1)
   {
       if (x<0)
       return d+x%d;
       return x%d;

   }
    long long int y= power (x, n/2, d)%d;
    if (n%2==1)
    {
        if (x<0)
        {

            return d+(((y*y)%d)*x)%d;

        }
        return (((y*y)%d)*x)%d;

    }
    return (y*y)%d;
}
int Solution::pow(int x, int n, int d) {

   long long int p=power (x,n,d);
   return p;

}
