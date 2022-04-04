#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <queue>
using namespace std;

void mostrarCues(vector<queue<string>> c, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "cua " << i + 1 << ":";
        while (not c[i].empty())
        {
            cout << " " << c[i].front();
            c[i].pop();
        }
        cout << endl;
    }
}

int main()
{
    string rows_names;

    int n;
    cin >> n;
    queue<string> sortides;
    vector<queue<string>> Colas(n);
    cin.ignore();
    for (int i = 0; i < n; i++)
    {

        getline(cin, rows_names);
        istringstream exp(rows_names);
        for (string aux; exp >> aux;)
        {
            Colas[i].push(aux);
        }
    }
    string s;
    getline(cin, s);
    while (cin >> s)
    {
        if (s == "SURT")
        {
            int x;
            cin >> x;
            if ((x > 0 && x <= n) and (not Colas[x - 1].empty()))
            {
                sortides.push(Colas[x - 1].front());
                Colas[x - 1].pop();
            }
        }
        else
        {
            string name;
            cin >> name;
            int x;
            cin >> x;
            if ((x > 0 && x <= n))
                Colas[x - 1].push(name);
        }
    }
    cout << "SORTIDES" << endl;
    cout << "--------" << endl;
    while (not sortides.empty())
    {
        cout << sortides.front() << endl;
        sortides.pop();
    }
    cout << endl;
    cout << "CONTINGUTS FINALS" << endl;
    cout << "-----------------" << endl;
    mostrarCues(Colas, n);
}
