#include "remove01.hpp"

typedef BinaryTree<int> BT;

int main()
{
  string s;
  while (cin >> s)
  {
    BinaryTree<int> t;
    readStringTree(s, t);
    cout << t << endl;
    BinaryTree<int> r = remove01(t);
    writeStringTree(cout, r);
    cout << endl;

    /*  t = t.getLeft();
     cout << t << endl;

     t = t.getRight();
     cout << t << endl;
     t = t.getLeft();
     cout << t << endl;
     t = t.getLeft();
     cout << t << endl;
   } */
  }
}