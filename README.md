# Praktikum_5

# Latihan 1 (Mencari nilai terbesar dari  sejumlah bilangan yang diinputkan dengan fungsi loop Do While)
-Mendeklarasikan variable int a,max=0; sebagai variable input
-Memasukkan bilangannya dengan perintah perulangan do
-Menentukan bilangan yang terbesar dengan rumus if (a>max)
                                                max=a;
-Memeriksa bilangan yang kita masukkan dengan perintah while (a!=0);
-Memasukkan angka 0,maka perintah perulangan akan berhenti
-Menampilkan hasil nilai terbesar kelayar dengan kode: cout << max;
-Berikut kode lengkapnya:

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

-Berikut Pseudocodenya:

1. a= ... a <--
2. while (a!=0)
3. Do.. if (a>max) (max=a)
4. WRITE (max)

-Berikut Flowchatnya:

![img](https://github.com/zaenalmusthofa86/Praktikum_5/blob/master/Flowlatihan1.png)

-Berikut Screenshotnya:

![img](https://github.com/zaenalmusthofa86/Praktikum_5/blob/master/Latihan1.png)

# Latihan 2 (Contoh penggunaan program logika operator OR [||])
-Mendeklarasikan variable int a,b,c; sebagai variable input
-Memasukkan bilangannya dengan perintah:  
cout << "Masukkan nilai pertama :";
 cin >> a;

 cout << "Masukkan nilai kedua :";
 cin >> b;

 cout << "Masukkan nilai ketiga :";
 cin >> c;
-Menentukan hasil nilai BENAR atau SALAH dengan rumus: if ( (a+b==c) || (a+c==b))
*Pernyataan BENAR apabila salah satu bilangan merupakan jumlah dari dua bilangan yang lain
*Pernyataan SALAH apabila tidak ada bilangan yang merupakan jumlah dari dua bilangan yang lain   
-Menampilkan hasil nilai BENAR atau SALAH kelayar dengan kode: 
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

-Berikut kode lengkapnya:

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

 if ((a+b==c) || (a+c==b))
 {
     cout << "BENAR";
 }
 else if ((b+c==a))
 {
     cout << "BENAR";
 }
 else
 {
     cout << "SALAH";
 }
 return 0;
}

-Berikut Pseudocodenya:

1. a =.... a <--
2. b =.... b <--
3. c =.... c <--
4. if((a+b==c || a+c==b))
5. WRITE (BENAR)
6. else if ((b+c==a))
7. WRITE (BENAR)
8. else
9. WRITE(SALAH)

-Berikut Flowchatnya:

![img](https://github.com/zaenalmusthofa86/Praktikum_5/blob/master/Flowlatihan2.png)

-Berikut Screenshotnya:
1.Pernyataan BENAR(1) 

![img](https://github.com/zaenalmusthofa86/Praktikum_5/blob/master/Latihan2.1.png)

2.Pernyataan BENAR(2)

![img](https://github.com/zaenalmusthofa86/Praktikum_5/blob/master/Latihan2.2.png)

3.Pernyataan BENAR(3)

![img](https://github.com/zaenalmusthofa86/Praktikum_5/blob/master/Latihan2.3.png)

4.Pernyataan SALAH

![img](https://github.com/zaenalmusthofa86/Praktikum_5/blob/master/Latihan2.4.png)