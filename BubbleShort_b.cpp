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
cout << endl;
cout << "======================" << endl;
cout << "Masukkan elemen array" << endl;
cout << "======================" << endl;

for (int i = 0; i < n; i++)
{
    cout << "Data ke-" << (i + 1) << ": ";
    cin >> arr[i];
}
void bubbleSort()
{
    int pass = 1;

    do
    {

   for (int j = 0; j<= n - 1 - pass; j++)
   (//step 2
        if(arr{j}) > arr {j + j})
        {// step 3
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