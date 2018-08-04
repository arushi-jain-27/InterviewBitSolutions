int Solution::largestRectangleArea(vector<int> &a) {
    stack <int> s;
    int max=a[0], i, area;
    for (i=0;i<a.size();)
    if (s.empty() || a[s.top()]<=a[i])
    s.push(i++);
    else
    {
        int top=a[s.top()];
        s.pop();
        if (!s.empty())
        area=top*(i-s.top()-1);
        else
        area=top*i;
        if (max<area)
        max=area;

    }
    while (!s.empty())
    {
        int top=a[s.top()];
        s.pop();
        if (!s.empty())
        area=top*(i-s.top()-1);
        else
        area=top*i;
        if (max<area)
        max=area;

    }
    return max;



}
