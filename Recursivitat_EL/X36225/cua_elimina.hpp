#include <iostream>
#include <queue>
#include "Punt.hpp"

using namespace std;

void ef_elimina_punts(queue<Punt> &c, queue<Punt> &aux, Punt p);

queue<Punt> elimina_punts(queue<Punt> c, Punt p);
/* Pre: c = C i p = P */
/* Post: retorna la cua C on s'han eliminat totes les aparicions del punt P */