#include "subPila.hpp"

int main()
{
    stack<int> p1, p2;
    int x;
    cin >> x;
    while (x != -1)
    {
        p1.push(x);
        cin >> x;
    }
    cout << "sub pila" << endl;
    cin >> x;
    while (x != -1)
    {
        p2.push(x);
        cin >> x;
    }
    if (subPila(p1, p2))
    {
        cout << "hi es subpila" << endl;
    }
    else
    {
        cout << "no ho es " << endl;
    }
}