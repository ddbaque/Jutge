#include "stackIOpunt.hpp"

ostream &operator<<(ostream &os, const stack<int> &s1)
{
    stack<int> s = s1;
    if (s.empty())
        cout << "]" << endl;
    else
    {
        while (not s.empty())
        {
            os << s.top();
            s.pop();
            if (s.size() >= 1)
                os << "|";
            else if (s.size() == 0)
                os << "]" << endl;
        }
    }

    return os;
}

istream &operator>>(istream &is, stack<int> &s1)
{
    int p;
    int n;
    is >> n;
    for (int i = 0; i < n; i++)
    {
        is >> p;
        s1.push(p);
    }
    return is;
}