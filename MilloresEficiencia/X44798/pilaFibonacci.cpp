#include "pilaFibonacci.hpp"
#include <iostream>

void re_pilaFibonacci(stack<int> &P, int &sum, bool &t)
{
    if (not P.empty())
    {
        int top = P.top(), top1;
        P.pop();
        if (not P.empty())
        {
            top1 = P.top();
            P.pop();
        }
        else
        {
            top1 = 1;
        }
        re_pilaFibonacci(P, sum, t);
        sum += top1;
        if (sum != top)
        {
            t = false;
        }
    }
}

bool pilaFibonacci(stack<int> P)
{
    int suma = 0;
    bool t = true;
    re_pilaFibonacci(P, suma, t);
    return t;
}
