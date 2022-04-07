#include "llista_compra_articles.hpp"

void ef_compra(list<int>::const_iterator it, list<int>::const_iterator end, list<int> &l, int &sum, int x)
{
    if (it != end)
    {
        --end;
        int e = *end;
        ef_compra(it, end, l, sum, x);
        if (sum + e <= x)
        {
            sum += e;
            l.push_back(e);
        }
    }
}

int compra_articles(const list<int> &l, int x)
{
    list<int> l1;
    int sum = 0;
    list<int>::const_iterator it = l.begin(), end = l.end();
    ef_compra(it, end, l1, sum, x);
    return l1.size();
}