#include <iostream>
#include "list_punt_separa.hpp"
#include "Punt.hpp"

using namespace std;

int main()
{
    list<Punt> lp;
    cin >> lp;
    cout << lp;
    lp.clear();
    cout << lp;
    /* float x;
    while (cin >> x)
    {
        list<Punt> lp1, lp2;
        separa(lp, x, lp1, lp2);
        cout << x << endl;
        cout << lp1;
        cout << lp2;
    }
 */
    return 0;
}
