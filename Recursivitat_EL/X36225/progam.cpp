#include "queueIOpunt.hpp"
#include "cua_elimina.hpp"
int main()
{
    queue<Punt> c;
    cin >> c;
    cout << c;
    Punt pt;
    while (cin >> pt)
        cout << elimina_punts(c, pt) << endl;
}