#include "BinaryTree.hpp"

using namespace std;

int sumOfNodes(const BinaryTree<int> &t)
{
    int sum;
    if (not t.isEmpty())
    {
        sum = t.getRoot() + sumOfNodes(t.getLeft()) + sumOfNodes(t.getRight());
    }
    else
    {
        sum = 0;
    }
    return sum;
}

int main()
{
    string s;
    while (cin >> s)
    {
        BinaryTree<int> t, r;
        readStringTree(s, t);
        /* for (int steps = 0; steps < 10; steps++)
            r = treeOfSums(t);
        writeStringTree(cout, r); */
        cout << t;
        cout << endl;
        cout << "suma -> " << sumOfNodes(t.getLeft().getLeft()) << endl;
        ;
    }
}