#include <iostream>
#include <string>
using namespace std;

int arr[20];
int n;

void input() 
{
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array: ";
        cin >> n;

        if (n <= 20)
            break;
        else
            cout << "\nArray dapat memiliki maksimal 20 elemen.\n";
    }

    cout << "=====================" << endl;
    cout << "Masukkan Elemen Array" << endl;
    cout << "=====================" << endl;

    for (int k = 0; k < n; k++)
    {
        cout << "Data ke-" << (k + 1) << ": ";
        cin >> arr[k];
    }
}

void bubbleSortArray()
{
    int pass = 1;

    do 
    {
        for (int k = 0; k < n - pass; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                int temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
        pass += 1;

        cout << "Pass " << (pass - 1) << ": ";
        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;

    } while (pass < n - 1);
}

void display()
{
    cout << "=================================" << endl;
    cout << "Elemen Array yang telah tersusun" << endl;
    cout << "=================================" << endl;

    for (int j = 0; j < n; j++)
    {
        cout << arr[j];
        if (j < n - 1)
        {
            cout << " --> ";
        }
    }
    cout << endl;
    cout << endl;

    cout << "Jumlah pass = " << n - 1 << endl;
    cout << endl;
    cout << endl;
}

int main()
{
    input();

    bubbleSortArray();
    display();

    system("pause");
    return 0;
}
