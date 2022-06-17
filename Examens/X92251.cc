#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include <vector>

using namespace std;

void ef_sumAboveOrBelow(stack<int> &sint, stack<string> &sstring, int &s1, int &s2)
{
    if (not sint.empty())
    {
        int front_int = sint.top();
        sint.pop();
        string front_string = sstring.top();
        sstring.pop();
        s1 += front_int;
        ef_sumAboveOrBelow(sint, sstring, s1, s2);
        if (front_string == "above")
        {
            sint.push(s1 - s2);
        }
        else
        {
            sint.push(s2 + front_int);
        }
        s2 += front_int;
    }
}

stack<int> sumAboveOrBelow(stack<int> sint, stack<string> sstring)
{
    int sumAbove = 0, sumBelow = 0;

    ef_sumAboveOrBelow(sint, sstring, sumAbove, sumBelow);
    return sint;
}

#ifndef IOSTACKFUNCTIONS
#define IOSTACKFUNCTIONS
static stack<int> readStackInt(string line)
{
    istringstream mycin(line);
    stack<int> s;
    int x;
    while (mycin >> x)
        s.push(x);
    return s;
}

static stack<string> readStackString(string line)
{
    istringstream mycin(line);
    stack<string> s;
    string x;
    while (mycin >> x)
        s.push(x);
    return s;
}

template <typename T>
static void writeStack(stack<T> s)
{
    vector<T> v;
    while (not s.empty())
    {
        v.push_back(s.top());
        s.pop();
    }
    for (int i = int(v.size()) - 1; i >= 0; i--)
    {
        if (i < int(v.size()) - 1)
            cout << " ";
        cout << v[i];
    }
    cout << endl;
}
#endif

int main()
{
    vector<stack<int>> v;
    vector<stack<string>> vs;
    string s;
    while (getline(cin, s))
    {
        v.push_back(readStackInt(s));
        getline(cin, s);
        vs.push_back(readStackString(s));
    }
    for (int i = 0; i < int(v.size()); ++i)
    {
        stack<int> s;
        for (int j = 0; j < 30; ++j)
            cout << v[i].size() << " " << vs[i].size() << endl;
        s = sumAboveOrBelow(v[i], vs[i]);
        writeStack(s);
    }
}
