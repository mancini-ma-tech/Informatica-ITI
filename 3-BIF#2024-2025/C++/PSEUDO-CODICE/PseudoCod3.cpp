#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "Dammi il valore di N: ";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "Il numero e' PARI" << endl;
    }
    else
    {
        cout << "Il numero e' DISPARI" << endl;
    }
    return 0;
}