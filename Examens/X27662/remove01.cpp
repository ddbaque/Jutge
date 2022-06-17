#include "remove01.hpp"

void re_remove01(BinaryTree<int> &t)
{
    if (not t.isEmpty())
    {
        int arrel = t.getRoot();
        if (arrel == 0)
        {
            t = t.getLeft();
            re_remove01(t);
        }
        else if (arrel == 1)
        {
            t = t.getRight();
            re_remove01(t);
        }
        else
        {
            re_remove01(t.getRight());
            re_remove01(t.getLeft());
        }
    }
}

BinaryTree<int> remove01(BinaryTree<int> t)
{
    BinaryTree<int> aux = t;
    re_remove01(aux);
    return aux;
}