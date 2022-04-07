#include "llista_compra_articles.hpp"

int main()
{
    list<int> l;
    int x;
    while (cin >> x)
    {
        l.push_back(x);
    }
    x = 50;
    cout << x << endl;
    cout << compra_articles(l, x) << endl;
}