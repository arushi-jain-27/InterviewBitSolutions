int Solution::candy(vector<int> &a) {


    int sum=0, candy=1, n=a.size();
    if (n<=1)
    return n;
    for (int i=0;i<n-1;i++)
    {
        if (a[i]>a[i+1])
        {
            int count=1;
            while (i<n-1 && a[i]>a[i+1])
            {
                count++;
                i++;
            }
            if (count>=candy)
            sum+=(count+1)*count/2;
            else
            sum+=candy+(count-1)*count/2;
            if (i==n-1)
            return sum;

            if (a[i]==a[i+1])
            candy=1;
            else
            candy=2;
        }
        else if (a[i]<a[i+1])
        {
            sum+=candy;
            candy++;
        }
        else
        {
            sum+=candy;
            candy=1;
        }
    }
    if (a[n-1]>=a[n-2])
    sum+=candy;
    return sum;






}




