#include <iostream>

using namespace std;

void girarLlista()
{
    string s;
    if (cin >> s)
    {
        girarLlista();
        cout << s << endl;
    }
}

int main()
{
    girarLlista();
}