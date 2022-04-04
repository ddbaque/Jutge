#include <iostream>
#include <stack>
#include <vector>
#include "Punt.hpp"
#include "stackIOpunt.hpp"

using namespace std;

bool buscarPuntPila(const Punt &p, stack<Punt> pila)
{
    while (not pila.empty())
    {
        if (pila.top() == p)
            return true;
        pila.pop();
    }

    return false;
}

int main()
{
    stack<Punt> pilaPunts;
    vector<Punt> puntABuscar;
    cin >> pilaPunts;
    Punt p;
    while (cin >> p)
    {
        puntABuscar.push_back(p);
    }
    cout << pilaPunts;
    for (unsigned int i = 0; i < puntABuscar.size(); i++)
    {
        if (buscarPuntPila(puntABuscar[i], pilaPunts))
        {
            cout << "El punt " << puntABuscar[i] << " es troba en la pila." << endl;
        }
        else
            cout << "El punt " << puntABuscar[i] << " no es troba en la pila." << endl;
    }
}