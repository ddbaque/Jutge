#include <iostream>
#include <stack>

using namespace std;

void ef_remove01(stack<int> &p, int i)
{
    if (not p.empty())
    {
        int top = p.top();
        p.pop();
        ef_remove01(p, i - 1);
        if (not((top == 1 && i % 2 == 1) or (top == 0 && i % 2 == 0)))
        {
            p.push(top);
        }
    }
}

/* stack<int> remove01(stack<int> s)
{
    ef_remove01(s, s.size() - 1);
    return s;
} */

stack<int> remove01(stack<int> s)
{
    stack<int> p;
    if (not s.empty())
    {
        int top = s.top();
        s.pop();
        p = remove01(s);
        int i = s.size();
        if (not((top == 1 && i % 2 == 1) or (top == 0 && i % 2 == 0)))
        {
            p.push(top);
        }
    }
    return p;
}

int main()
{
    stack<int> s, r;
    int x;

    while (cin >> x)
    {
        s.push(x);
    }
    r = remove01(s);
    while (not r.empty())
    {
        cout << r.top() << " ";
        r.pop();
    }
    cout << endl;

    return 0;
}
