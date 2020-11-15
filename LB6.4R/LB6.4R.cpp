#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

int Count(int* a, const int size, int i, int count)
{
    if (a[i] > 0)
        count++;
    if (i < size - 1)
        return Count(a, size, i + 1, count);
    else
        return count;
}

void sort(int* arr, const int SIZE, int i)
{
    int min = arr[i];
    int imin = i;
    for (int j = i + 1; j < SIZE; j++)
        if (min > arr[j])
        {
            min = arr[j];
            imin = j;
        }
    arr[imin] = arr[i];
    arr[i] = min;

    if (i < SIZE - 2)
        sort(arr, SIZE, i + 1);
}

int Sum(int* a, const int size, int sum, int k)
{
    if (k < size)
    {
        if (a[k] == 0)
        {
            sum = 0;
            for (int f = k + 1; f < size; f++)
            {
                sum += a[f];
            }
            


        }
        Sum(a, size, sum, ++k);
    }
    else return sum;
}

void Create(int* a, const int size, const int Low, const int High, int i)
{
    a[i] = Low + rand() % (High - Low + 1);
    if (i < size - 1)
        Create(a, size, Low, High, i + 1);
}

void Print(int* a, const int size, int i)
{
    cout << setw(4) << a[i];
    if (i < size - 1)
        Print(a, size, i + 1);
    else
        cout << endl;
}

int main() {
    srand((unsigned)time(NULL));
    int Low;
    cout << "Low = "; cin >> Low;
    int High;
    cout << "High = "; cin >> High;
    int n;
    cout << "n=  "; cin >> n;
    int* a = new int[n];
    Create(a, n, Low, High,0);
    cout << "Count=  " << Count(a, n, 1, a[0]);
    cout << endl;
    Print(a, n,0);
    cout << "Sum=  " << Sum(a, n,0,0);
    sort(a, n,0);
    cout << endl;
    Print(a, n,0);
    Count(a, n, a[0],0 );
    system("pause");
    return 0;
}
