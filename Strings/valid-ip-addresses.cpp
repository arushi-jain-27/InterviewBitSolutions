bool valid (string a)
{
    if (a.size()>3 || a.size()==0)
    return false;
    if (a[0]=='0' && a.size()>1)
    return false;
    int b=0;
    for (int i=0;i<a.size();i++)
    b=b*10+(a[i]-48);
    if (b>=0 && b<=255)
    return true;
    return false;
}
vector<string> Solution::restoreIpAddresses(string A) {
    vector<string> a;
    if (A.size()<4 || A.size()>12)
    return a;
    int l=A.size();
    string first, second, third, fourth, temp;
    for (int i=1;i<=3;i++)
    {
        first=A.substr (0, i);
        if (!valid(first))
        continue;
        for (int j=1;j<=3 && i+j<l;j++)
        {
            second=A.substr (i, j);
            if (!valid (second))
            continue;
            for (int k=1;k<=3 && i+j+k<l;k++)
            {
                third=A.substr(i+j, k);
                fourth=A.substr (i+j+k, l-(i+j+k));
                if (valid (third) && valid (fourth))
                {
                    temp=first+"."+second+"."+third+"."+fourth;
                    a.push_back(temp);
                }

            }
        }

    }
    return a;


}
