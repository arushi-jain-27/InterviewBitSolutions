struct hot
{
    int day;
    int type;
};
bool compare (hot a, hot b)
{
    return a.day<b.day || (a.day==b.day && a.type>b.type);
}
bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {

    vector <hot> p;
    for (int i=0;i<arrive.size();i++)
    {
        hot h;
        h.day=arrive[i];
        h.type=0;
        p.push_back (h);
        h.day=depart[i];
        h.type=1;
        p.push_back (h);
    }
    sort (p.begin(), p.end(), compare);
    int count=0, maxi=0;
    for (int i=0;i<p.size();i++)
    if (p[i].type==0)
    {
        count++;
        maxi=max (maxi, count);
    }
    else
    count--;
    count=0;

    return maxi<=K;




}
