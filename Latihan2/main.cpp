#include <iostream>

using namespace std;

int main()
{
 int a,b,c;

 cout << "Masukkan nilai pertama :";
 cin >> a;

 cout << "Masukkan nilai kedua :";
 cin >> b;

 cout << "Masukkan nilai ketiga :";
 cin >> c;

 if ( (a+b==c) || (a+c==b))
 {
     cout << "BENAR";
 }
 else if ( (b+c==a))
 {
     cout << "BENAR";
 }
 else
 {
     cout << "SALAH";
 }
 return 0;
}
