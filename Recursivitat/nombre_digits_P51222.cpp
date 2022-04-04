#include <iostream>

using namespace std;

int nombre_digits(int n)
{
    int suma = 1;
    if (n / 10 > 0)
    {
        suma += nombre_digits(n / 10);
    }
    return suma;
}

int main()
{
    cout << "number: ";
    int n;
    cin >> n;
    cout << "digits: " << nombre_digits(n) << endl;
}