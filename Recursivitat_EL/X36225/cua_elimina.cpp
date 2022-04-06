#include "cua_elimina.hpp"
#include "queueIOpunt.hpp"

void ef_elimina_punts(queue<Punt> &c, queue<Punt> &aux, Punt p)
{
    if (not c.empty())
    {
        Punt front = c.front();
        c.pop();
        if (front == p)
        {
        }
        else
        {

            aux.push(front);
        }
        ef_elimina_punts(c, aux, p);
    }
}

queue<Punt> elimina_punts(queue<Punt> c, Punt p)
{
    queue<Punt> aux;
    ef_elimina_punts(c, aux, p);
    return aux;
}