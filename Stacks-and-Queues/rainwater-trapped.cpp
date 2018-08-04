int Solution::trap(const vector<int> &height) {
    stack <int> s;
    int sum=0;
    for (int i=0;i<height.size();i++)
    if (s.empty() || height[i]<=height[s.top()])
    s.push(i);
    else{
    while (!s.empty() && height[i]>height[s.top()])
    {

        int tp=s.top();
        s.pop();
        if (!s.empty()){
        int dist=i-s.top()-1;
        int ht=min (height[s.top()], height[i])-height[tp];
        sum+=ht*dist;
        }



    }
    s.push(i);
    }
    return sum;
}
