#include <iostream>
#include <stack>

using namespace std;

void girarLlista(stack<string> s, int n)
{
    if (not s.empty())
    {
        string name = s.top();
        s.pop();
        if (s.size() < n)
        {
            cout << name << endl;
        }
        girarLlista(s, n);
    }
}

int main()
{
    stack<string> pila;
    int n;
    cin >> n;
    string s;
    while (cin >> s)
    {
        pila.push(s);
    }
    girarLlista(pila, n);

    return 0;
}