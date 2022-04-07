#include <iostream>
#include <list>

using namespace std;

int ef_elem_central(list<int>::const_iterator it, int &i, int size);

int elem_central(const list<int> &l);
/* Pre: l = L i la mida de L és senar */
/* Post: El resultat es l'element central de L */