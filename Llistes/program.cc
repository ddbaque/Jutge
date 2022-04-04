#include <iostream>
#include <list>

using namespace std;

istream &operator>>(istream &is, pair<int, int> &par);

ostream &operator<<(ostream &os, const pair<int, int> &par);

istream &operator>>(istream &is, list<pair<int, int>> &li);

ostream &operator<<(ostream &os, const list<pair<int, int>> &li);

ostream &operator<<(ostream &os, const list<int> &lv);

bool isPairZero(const pair<int, int> &par);

void MMM(list<int> &lv);

void remove(list<int> &lv, int x);

int main()
{
    pair<int, int> Pair;
    list<pair<int, int>> li;
    list<int> lv, aux = {};
    cin >> li;
    for (list<pair<int, int>>::iterator it = li.begin(); it != li.end(); ++it)
    {
        if ((*it).first == -1)
        {
            lv.push_back((*it).second);
            MMM(lv);
        }
        else
        {
            int x = (*it).second;
            remove(lv, x);
            if (lv != aux)
            {
                MMM(lv);
            }
            else
                cout << 0 << endl;
        }
    }

    return 0;
}

istream &operator>>(istream &is, pair<int, int> &par)
{
    is >> par.first;
    is >> par.second;
    return is;
}

ostream &operator<<(ostream &os, const pair<int, int> &par)
{
    os << "(" << par.first << ", " << par.second << ")" << endl;
    return os;
}

istream &operator>>(istream &is, list<pair<int, int>> &li)
{
    pair<int, int> par;

    is >> par;
    while (not isPairZero(par))
    {
        li.push_back(par);
        is >> par;
    }
    return is;
}

ostream &operator<<(ostream &os, const list<pair<int, int>> &li)
{
    for (auto &elem : li)
    {
        os << elem;
    }
    return os;
}

ostream &operator<<(ostream &os, const list<int> &lv)
{
    for (list<int>::const_iterator it = lv.begin(); it != lv.end(); ++it)
    {
        os << *it << " ";
    }
    cout << endl;
    return os;
}

bool isPairZero(const pair<int, int> &par)
{
    if ((par.first == 0) && (par.second == 0))
        return true;
    return false;
}

void MMM(list<int> &lv)
{
    list<int>::iterator it = lv.begin(), aux;
    int max, min, cnt = 0;
    float media = 0;
    max = *it;
    min = *it;
    media += *it;
    for (list<int>::iterator it = lv.begin(); it != lv.end(); ++it)
    {
        if (max < *it)
            max = *it;
        if (min > *it)
            min = *it;
        media += *it;
        cnt++;
    }
    cout << min << " " << max << " " << media / cnt << endl;
}

void remove(list<int> &lv, int x)
{
    bool t = true;
    for (list<int>::iterator it = lv.begin(); it != lv.end() and t; ++it)
    {
        if (*it == x)
        {
            lv.erase(it);
            t = false;
        }
    }
}
