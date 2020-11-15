#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
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
    Create(a, n, Low, High);
    Print(a, n);
    cout << "index = " << Max(a, n) << endl;
    system("pause");
    return 0;
}