string Solution::intToRoman(int A) {
    string s="IVXLCDM";
    vector<int> a={1,5,10,50,100,500,1000};
    string c="";
    int i=a.size()-1;
    while (A)
    {
        if (i>=2 && i%2==0 && A>=a[i]-a[i-2] && A<a[i])
        {
            c+=s[i-2];
            c+=s[i];
            A-=a[i]-a[i-2];

        }
        else if (i>=1 && i%2==1 && A>=a[i]-a[i-1] && A<a[i])
        {
            c+=s[i-1];
            c+=s[i];
            A-=a[i]-a[i-1];
        }
        else if (A/a[i]>0)
        {
            int b=A/a[i];
            while (b--)
            c+=s[i];
            A=A%a[i];
            //cout<<A;
            i++;
        }

        i--;
    }
    return c;
}
