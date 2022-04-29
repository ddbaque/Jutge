#include <map>
#include <iostream>

using namespace std;

int main()
{
    map<string, int> m;
    char c;
    while (cin >> c)
    {
        string s;
        cin >> s;
        if (c == 'a')
        {
            m[s]++;
        }
        else
        {
            cout << m[s] << endl;
        }
    }
}