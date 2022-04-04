#include "list_punt_separa.hpp"

using namespace std;

void separa(list<Punt> &lp, float x, list<Punt> &lp1, list<Punt> &lp2)
{
    for (list<Punt>::iterator it = lp.begin(); it != lp.end(); it++)
    {
        if (x > (*it).coordenadax())
            lp1.push_back(*it);
    }
    for (list<Punt>::iterator it = lp.begin(); it != lp.end(); it++)
    {
        if (x < (*it).coordenadax())
            lp2.push_back(*it);
    }
    lp.clear();
}

/* for (auto &it : lp)
{
    cout << it << " ";
}
cout << endl;
for (list<Punt>::iterator it = lp.begin(); it != lp.end(); it++)
{
    cout << *it << " ";
}
cout << endl; */