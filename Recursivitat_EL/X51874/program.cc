#include "esborraSenars.hpp"

int main()
{
    stack<int> s;
    int x;
    while (cin >> x)
    {
        s.push(x);
    }
    esborraSenars(s);
    while (not s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}