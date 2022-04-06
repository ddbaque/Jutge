#include "stackIOpunt.hpp"

bool validarPunt(stack<Punt> p, const Punt &pt)
{
    bool t = false;
    if (not p.empty())
    {
        Punt top = p.top();
        p.pop();
        if (top == pt)
            t = true;
        else
            t = validarPunt(p, pt);
    }
    return t;
}

int main()
{
    stack<Punt> p;
    cin >> p;
    cout << p;
    Punt pt;
    while (cin >> pt)
    {
        if (validarPunt(p, pt))
            cout << "El punt " << pt << " es troba en la pila." << endl;
        else
            cout << "El punt " << pt << " no es troba en la pila." << endl;
    }
}