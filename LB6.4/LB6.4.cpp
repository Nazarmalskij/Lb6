#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

int Count(int* a, const int size)
{
    
    int count = 0;
    for (int i = 0; i < size; i++)
    {

        if (a[i] > 0 ) {
           
            count++ ;
        }

    }
    return count;
}

void sort(int* arr, const int SIZE)
{
    for (int i = 0; i < SIZE - 1; i++)
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
    }
}

int Sum(int* a, const int size)
{
    int sum = 0;
    for (int k = 0; k < size; k++)
    {
        if (a[k] == 0)
        {
            sum = 0;
            for (int f = k + 1; f < size; f++)
            {
                sum += a[f];
            }
          
            
        }
    }
    return sum;
}

void Create(int* b, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        b[i] = Low + rand() % (High - Low + 1);

}
void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
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
    int *a=new int[n];
    Create(a, n, Low, High);
    cout << "Count=  " << Count(a, n);
    cout << endl;
    Print(a, n);
    Sum(a, n);
    cout << "Sum=  " << Sum(a, n);
    sort(a, n);
    cout << endl;
    Print(a, n);
    Count(a, n);
    system("pause");
    return 0;
}
