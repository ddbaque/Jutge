#include <iostream>
#include <stack>
#include "stackIOint.hpp"
#include "pila_concatena.hpp"

using namespace std;

int main()
{

    string g = "----------";
    while (g == "----------")
    {
        stack<int> s, s1, concatp, aux1, aux2;
        cin >> s;
        cin >> s1;
        aux1 = s;
        aux2 = s1;
        concatena_piles(s, s1, concatp);
        cout << "pila 1: " << aux1;
        cout << "pila 2: " << aux2;
        cout << "pila concatenació: " << concatp;
        cin >> g;
    }
}
