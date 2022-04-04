#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void radix_sort(queue<string> &c, vector<queue<string>> &v, int s)
{
    while (not c.empty())
    {
        char ch = c.front()[s];
        v[int(ch) - 97].push(c.front());
        c.pop();
    }
    for (int i = 0; i < 26; i++)
    {
        while (not v[i].empty())
        {
            c.push(v[i].front());
            v[i].pop();
        }
    }
    if (s > 0)
        radix_sort(c, v, s - 1);
}

int main()
{
    vector<queue<string>> v(26);
    queue<string> Cola;
    string paraules;
    getline(cin, paraules);

    istringstream exp(paraules);
    for (string paraula; exp >> paraula;)
    {
        Cola.push(paraula);
    }
    int n = Cola.front().size() - 1;
    radix_sort(Cola, v, n);
    while (not Cola.empty())
    {
        cout << Cola.front();
        Cola.pop();
        if (Cola.size() > 0)
            cout << " ";
    }
    cout << endl;
}