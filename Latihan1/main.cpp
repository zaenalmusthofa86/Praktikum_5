#include <iostream>

using namespace std;

int main()
{
    int a,max=0;

    do
    {
        cout << "Masukkan bilangannya :";
    cin >> a;

    if (a>max)
        max=a;
    }
    while (a!=0);

    cout << max;

    return 0;
}
