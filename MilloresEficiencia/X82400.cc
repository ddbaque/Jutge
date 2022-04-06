// Elimina majors suma anteriors en una cua
#include <iostream>
#include <queue>
#include <bits/stdc++.h>

using namespace std;

/* queue<int> suamaAnteriors(queue<int> &c)
{
    queue<int> final;
    int i = c.size(), s = 0;
    for (int j = 0; j < i; j++)
    {
        int front = c.front();
        c.pop();
        if (front < s)
        {
            final.push(front);
        }
        s += front;
    }
    return final;
} */

void ef_sumaAnteriors(queue<int> &c, queue<int> &f, int &s)
{
    if (not c.empty())
    {
        int front = c.front();
        c.pop();
        if (front < s)
        {
            f.push(front);
        }
        s += front;
        ef_sumaAnteriors(c, f, s);
    }
}

int main()
{

    for (string expresio; getline(cin, expresio);)
    {
        istringstream exp(expresio);
        queue<int> c, f;
        int s = 0;
        for (string op; exp >> op;)
        {
            int x = stoi(op);
            c.push(x);
        }
        ef_sumaAnteriors(c, f, s);
        bool t = true;
        while (not f.empty())
        {
            if (not t)
            {
                cout << " ";
            }
            t = false;
            cout << f.front();
            f.pop();
        }
        cout << endl;
    }

    return 0;
}