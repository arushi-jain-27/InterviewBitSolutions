int minEle;
stack <int> s;
MinStack::MinStack() {
   minEle=INT_MAX;
   while (!s.empty())
   s.pop();

}

void MinStack::push(int x) {
    if (s.empty()||minEle<x)
    {
        if (s.empty())
        minEle=x;
        s.push(x);

    }
    else
    {
        s.push(2*x-minEle);
        minEle=x;
    }

}

void MinStack::pop() {
    if (s.empty())
    return;
    if (s.top()<minEle)
    {
        minEle=2*minEle-s.top();

    }
    s.pop();

}

int MinStack::top() {
    if (s.empty())
    return -1;
    if (s.top()<minEle)
    return minEle;
    return s.top();

}

int MinStack::getMin() {
    if (s.empty())
    return -1;
    return minEle;

}

