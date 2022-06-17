#include "maximumTree.hpp"

void re_maximumTree(BinaryTree<int> &a1, const BinaryTree<int> &a2)
{
    if (not a1.isEmpty() or not a2.isEmpty())
    {
        if (not a1.isEmpty())
        {
            if (a1.getRoot() < a2.getRoot())
            {
                a1.getRoot() = a2.getRoot();
            }
        }
    }
}

BinaryTree<int> maximumTree(BinaryTree<int> a1, BinaryTree<int> a2)
{
    BinaryTree<int> aux = a1;
    re_maximumTree(aux, a2);
    return aux;
}
