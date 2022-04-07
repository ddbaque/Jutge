#include "llista_elem_central.hpp"

int main()
{
    list<int> l;
    int x;
    while (cin >> x)
    {
        l.push_back(x);
    }
    int e = elem_central(l);
    cout << e << endl;
}