#include "queueIOpunt.hpp"

ostream &operator<<(ostream &os, const queue<Punt> &c)
{
    queue<Punt> aux = c;
    os << "<";
    while (not aux.empty())
    {
        os << aux.front() << "|";
        aux.pop();
    }
    os << "<" << endl;
    return os;
}

istream &operator>>(istream &is, queue<Punt> &c)
{
    int x;
    is >> x;
    for (int i = 0; i < x; i++)
    {
        Punt pt;
        is >> pt;
        c.push(pt);
    }
    return is;
}
