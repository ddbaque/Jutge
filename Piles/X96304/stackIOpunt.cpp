#include "stackIOpunt.hpp"

ostream &operator<<(ostream &os, const stack<Punt> &p)
{
    stack<Punt> aux = p;
    bool t = true;
    while (not aux.empty())
    {
        if (not t)
            os << "|";
        t = false;
        os << aux.top();
        aux.pop();
    }
    os << "]" << endl;
    return os;
}

istream &operator>>(istream &is, stack<Punt> &p)
{
    Punt pt;
    int x;
    is >> x;
    for (int i = 0; i < x; i++)
    {
        is >> pt;
        p.push(pt);
    }
    return is;
}
