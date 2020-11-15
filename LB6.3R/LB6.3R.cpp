#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void crate(int* a, int size, int i)
{

	if (i < size)
	{
		cin >> a[i];
		crate(a, size, ++i);
	}
}
void Print(int* a, const int size, int i)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
int main()
{
	int size;
	cout << "array size"; cin >> size;
	int* a = new int[size];
	cout << "elem" << endl;
	crate(a, size, 0);
	Print(a, size, 0);
	system("pause");
	return 0;

}

