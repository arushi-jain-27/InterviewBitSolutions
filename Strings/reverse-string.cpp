void Solution::reverseWords(string &a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int prev=-1;
    int x=a.find (' ');
    stack <string> st;
    while (x!=-1)
    {
        string s=a.substr (prev+1, x-prev-1);
        //cout<<s<<" ";
        st.push (s);
        prev=x;
        while (a[x]==' ')
        {
            a[x]='$';
            x++;
        }

        x=a.find(' ');
    }
    if (a[a.size()-1]!=' ')
    {
        string s=a.substr (prev+1, a.size()-prev-1);
        st.push (s);
    }
    a.clear();
    a="";
    while (!st.empty())
    {
        a+=st.top();
        st.pop();
        if (!st.empty())
        a+=" ";
    }

}
