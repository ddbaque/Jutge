#include "esborraSenars.hpp"

void esborraSenars(stack<int> &P)
{
    if (not P.empty())
    {
        int top = P.top();
        P.pop();
        esborraSenars(P);
        if (top % 2 == 0)
            P.push(top);
    }
}
