#include "queueIOpunt.hpp"
#include "stackIOpunt.hpp"

void toStack(queue<Punt> &c, stack<Punt> &p)
{
    if (not c.empty())
    {
        Punt pt = c.front();
        c.pop();
        toStack(c, p);
        p.push(pt);
    }
}

int main()
{
    queue<Punt> c;
    while (cin >> c)
    {
        stack<Punt> p;
        cout << c;
        toStack(c, p);
        cout << p;
    }

    return 0;
}