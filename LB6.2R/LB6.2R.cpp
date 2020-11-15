#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
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
int Max(int* a, const int size)
{
    int max = a[0];
    int index = 0;
    for (int i = 1; i < size; i++)
    {

        if (a[i] > max && a[i] % 2 == 0) {
            max = a[i];
            index = i;
        }

    }
    return index;
}


int main()
{
    srand((unsigned)time(NULL));
    int const n = 20;
    int Low = -20;
    int High = 25;
    int a[n];
    Create(a, n, Low, High,0);
    Print(a, n, 0);
    cout << "index = " << Max(a, n) << endl;
    system("pause");
    return 0;
}