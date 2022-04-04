#include <iostream>
#include <stack>

using namespace std;

void concatena_piles(stack<int> &p, stack<int> &q, stack<int> &concatp)
{
    if (!p.empty())
    {
        int n = p.top();
        p.pop();
        concatena_piles(p, q, concatp);
        concatp.push(n);
    }
    if (!q.empty())
    {
        int n = q.top();
        q.pop();
        concatena_piles(p, q, concatp);
        concatp.push(n);
    }
}

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
