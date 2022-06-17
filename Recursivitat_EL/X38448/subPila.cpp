#include "subPila.hpp"

void re_subPila(stack<int> p1, stack<int> p2, bool &t)
{
    if (not p1.empty())
    {
        int top1 = p1.top(), top2 = p2.top();
        if (top1 != top2)
        {
            t = false;
        }
        p1.pop();
        p2.pop();
        re_subPila(p1, p2, t);
    }
}

bool subPila(stack<int> p1, stack<int> p2)
{
    bool t = true;
    while (not p1.empty())
    {
        if (p1.top() == p2.top() and p1.size() >= p2.size())
        {
            re_subPila(p2, p1, t);
        }
        p1.pop();
    }
    return t;
}