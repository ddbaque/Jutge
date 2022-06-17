#include <iostream>
#include <queue>
#include <bits/stdc++.h>

using namespace std;

void re_sumaAnterios(queue<int> &c, queue<int> &aux, int &s)
{
    if (not c.empty())
    {
        int front = c.front();
        c.pop();
        if (front <= s)
        {
            aux.push(front);
        }
        s += front;

        re_sumaAnterios(c, aux, s);
    }
}

queue<int> sumaAnteriors(queue<int> &c)
{
    queue<int> aux;
    int s = 0;
    re_sumaAnterios(c, aux, s);
    return aux;
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
        f = sumaAnteriors(c);
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
}