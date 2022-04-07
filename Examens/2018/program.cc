#include <iostream>
#include <stack>

using namespace std;

void ef_intercalats(stack<int> &p1, stack<int> &p2)
{
    if (not p1.empty())
    {
        int top1 = p1.top(), top2;
        p1.pop();
        if (not p2.empty())
        {
            top2 = p2.top();
            p2.pop();
        }
        ef_intercalats(p1, p2);
        if (p2.empty())
        {
            p1.push(top1);
        }
        else
        {
            p1.push(top2);
            p1.push(top1);
        }
    }
}

stack<int> intercalats(stack<int> p1, stack<int> p2)
{
    if (p1.size() > p2.size())
    {
        ef_intercalats(p1, p2);
        return p1;
    }
    else
    {
        ef_intercalats(p2, p1);
        return p2;
    }
}

int main()
{
    stack<int> p, p1, f;
    int x;
    cin >> x;
    while (x != -1)
    {
        p.push(x);
        cin >> x;
    }
    cin >> x;
    while (x != -1)
    {
        p.push(x);
        cin >> x;
    }

    f = intercalats(p, p1);
    while (not f.empty())
    {
        cout << f.top() << " ";
        f.pop();
    }
    cout << endl;
}