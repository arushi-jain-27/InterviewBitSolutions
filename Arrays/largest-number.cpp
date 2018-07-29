long long int conc (int x, int y)
{
    int a=y, dig=0;
    while (a)
    {
        dig++;
        a/=10;
    }
    return x*pow(10, dig)+y;
}
bool compare (int x, int y)
{
    if (conc (x,y)>conc(y,x))
    return true;
    return false;
}
string Solution::largestNumber(const vector<int> &a) {
    vector <int> b=a;
    sort (b.begin(), b.end(), compare);
    string s="";
    if (b[0]==0)
    return "0";
    for (int i=0;i<a.size();i++)
    s+=to_string (b[i]);
    return s;
}
