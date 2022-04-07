#include "llista_elem_central.hpp"

int ef_elem_central(list<int>::const_iterator it, int i, int size)
{
    int center = 0;
    if (i < size)
    {
        int e = *it;
        ++it;
        center = ef_elem_central(it, i + 1, size);
        if (i == size - 1)
        {
            center = e;
        }
    }
    return center;
}

int elem_central(const list<int> &l)
{
    int center, i = -1;
    int size = l.size() / 2 + 1;
    center = ef_elem_central(l.begin(), i + 1, size);
    return center;
}