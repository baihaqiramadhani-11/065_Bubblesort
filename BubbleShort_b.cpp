#include <iostream>
#include <string>
using namespace std;

int arr[20]; //deklarasi variable global array a dengan ukuran 20
int n; //deklarasi variable global n untuk menyimpan jumlah elemen yang akan diurutkan 

void input()
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array: ";
        cin >> n;
        if (n <= 20)
            break;
        else
        (
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
        )
    ]
       