#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void crate(int* a, int size)
{
	cout << "elem"<<endl;
	for (int i = 0; i < size; i++) 
	{
		cin >> a[i];
	}
}
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
int main()
{
	 int size;
	cout << "array size"; cin >> size;
	int* a=new int[size];
	crate(a, size);
	Print(a,size);
	return 0;

}


