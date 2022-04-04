#include <iostream>

using namespace std;

int sumaGauss(int n)
{
    if (n <= 1)
        return 1;
    return sumaGauss(n - 1) + n;
}

int main()
{

    int n;
    cin >> n;
    cout << sumaGauss(n) << endl;
}