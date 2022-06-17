#include "treeOfSums.hpp"

int sumOfNodes(BinaryTree<int> &t)
{
    int sum;
    if (not t.isEmpty())
    {
        sum = t.getRoot() + sumOfNodes(t.getLeft()) + sumOfNodes(t.getRight());
        t.getRoot() = sum;
    }
    else
    {
        sum = 0;
    }
    return sum;
}

/* void re_treeOfSums(BinaryTree<int> &t)
{
    if (not t.isEmpty())
    {
        t.getRoot() = sumOfNodes(t);
        re_treeOfSums(t.getLeft());
        re_treeOfSums(t.getRight());
    }
}
 */
BinaryTree<int> treeOfSums(BinaryTree<int> t)
{
    sumOfNodes(t);
    return t;
}