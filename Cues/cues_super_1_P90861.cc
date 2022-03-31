#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <queue>
using namespace std;

void mostrarCues(vector<queue<string>>, int);

int main()
{
    string rows_names;

    int n;
    cin >> n;

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

    cout << endl;

    mostrarCues(Colas, n);

    for (string instruccio; getline(cin, instruccio);)
    {
        int cnt;
        string aux1;
        istringstream exp(instruccio);
        for (string aux; exp >> aux;)
        {
            cout << aux << endl;
            if (aux == "ENTRA")
            {
                cnt = 1;
            }
            if (aux == "SURT")
            {
                cnt = 2;
            }
            else
            {
                cout << "entro" << cnt << endl;
                if (cnt == 2)
                {
                    int x = stoi(aux);
                    cout << x << endl;
                    if ((x > 0 and x < n))
                    {
                        Colas[x - 1].pop();
                        mostrarCues(Colas, n);
                    }
                }

                else if (cnt == 1)
                {
                    aux1 = aux;
                    cnt == 0;
                }
                else
                {
                    if (stoi(aux) - 1 > 0 and stoi(aux) < n)
                    {
                        Colas[stoi(aux) - 1].push(aux1);
                        mostrarCues(Colas, n);
                    }
                }
            }
        }
    }

    mostrarCues(Colas, n);
}

void mostrarCues(vector<queue<string>> c, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "cua " << i + 1 << ": ";
        while (not c[i].empty())
        {
            cout << c[i].front();
            if (c[i].size() > 1)
                cout << " ";
            c[i].pop();
        }
        cout << endl;
    }
}