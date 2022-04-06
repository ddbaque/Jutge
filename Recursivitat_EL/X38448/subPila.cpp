#include "subPila.hpp"

bool comparaPila(stack<int> p1, stack<int> p2)
{
    bool t = false;
    if (not p1.empty())
    {
        int top = p1.top();
        int top2 = p2.top();
        p1.pop();
        p2.pop();
        t = comparaPila(p1, p2);
        if (top == top2)
            t = true;
        else
            t = false;
    }

    return t;
}

bool subPila(stack<int> p1, stack<int> p2)
{
    bool t = false;
    if (not p1.empty())
    {
        int top = p1.top();
        if (top == p2.top() and p1.size() >= p2.size())
        {
            cout << "entro " << top << endl;
            t = comparaPila(p2, p1);
            cout << t << endl;
        }
        if (t == false)
        {
            p1.pop();
            t = subPila(p1, p2);
        }
    }
    return t;
}