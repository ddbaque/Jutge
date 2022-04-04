#include "listIOpunt.hpp"

ostream &operator<<(ostream &os, const list<Punt> &lp)
{
    os << "[";
    bool firstelem = true;
    for (list<Punt>::const_iterator it = lp.begin(); it != lp.end(); ++it)
    {
        if (not firstelem)
            os << ",";
        firstelem = false;
        os << *it;
    }
    os << "]" << endl;
    return os;
}
istream &operator>>(istream &is, list<Punt> &lp)
{
    Punt p;
    int x;
    is >> x;
    for (int i = 0; i < x; i++)
    {
        is >> p;
        lp.push_back(p);
    }
    return is;
}
