#include <iostream>
#include <string>
using namespace std;

int arr[20]; //Deklarasi variable global array a dengan ukuran 20
int n; //Deklarasi variable global n untuk menyimpan banyaknya elemen pada array

void input()
{ //Prosedur untuk input data ke dalam array
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array: "; // Output ke layar
        cin >> n;                                         // Input dari pengguna
        if (n <= 20)                                      // Jika n kurang dari atau sama dengan 20, maka keluar dari loop
            break;                                        // Keluar dari loop
        else
        {                                                           // Jika n lebih dari 20, maka tampilkan pesan error dan minta input ulang
            cout << "\nArray dapat memiliki maksimal 20 elemen.\n"; // Output ke layar jika n lebih dari 20
        }
    }
    cout << endl;
    cout << "\n===================" << endl;
    cout << "Masukkan Elemen Array" << endl;
    cout << "===================" << endl;

    for (int i = 0; i < n; i++)
    {                                           // Looping dengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << ": ";  // Output ke layar
        cin >> arr[i];                          // Input dari pengguna
    }
}

void BubbleSortArray()
{                   // Prosedur untuk mengurutkan array menggunakan algoritma bubble sort
    int pass = 1;   // Step 1

    do
    {
        for (int j = 0; j <= n - 1 - pass; j++)
        {                                          // Step 2
            if (arr[j] > arr[j + 1])
            {                                      // Step 3
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

        }
        pass += 1;                                 // Step 4

        cout << "\nPass " << pass - 1 << ": ";
        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " ";                 
        }
        cout << endl;

    } while (pass <= n - 1);                       // Step 5
}

void display()
{
    cout << endl;
    cout << "================================" << endl;
    cout << "Elemen Array yang telah tersusun" << endl;
    cout << "================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++)
    {
        cout << arr[j];         // Menampilkan Array yang sudah diurutkan
        if (j < n - 1)
        {
            cout << " --> ";      // Menampilkan koma setelah setiap elemen kecuali elemen terakhir
        }
    }
    cout << endl;
    cout << endl;

    cout << "Jumlah Pass = " << n - 1 << endl; // Menampilkan jumlah pass yang dibutuhkan untuk mengurutkan array
    cout << endl;
    cout << endl;
}

int main()
{
    input();
    BubbleSortArray();
    display();          

    system("pause");
    return 0;
}