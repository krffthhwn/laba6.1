#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* d, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		d[i] = Low + rand() % (High - Low + 1);

}
void Print(int* d, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << d[i];

	cout << endl;
}

int Sum(int* d, const int size)
{
	int S = 0;

	for (int i = 0; i < size; i++)
		if (d[i] > 0 && d[i] % 2 != 0)

		{
			S += d[i];
		}
	return S;
}
int Number(int* d, const int size)

{
	int N = 0;

	for (int i = 0; i < size; i++)
		if (d[i] > 0 && d[i] % 2 != 0)

		{
			N++;
		}
	return N;
}
void Zero(int* d, const int size)
{
	for (int i = 0; i < size; i++)
		if (d[i] > 0 && d[i] % 2 != 0)

		{
			d[i] = 0;
		}
}
int main()
{
	srand((unsigned)time(NULL));

	const int z = 23;
	int d[z];

	int Low = -25;
	int High = 80;

	Create(d, z, Low, High);
	cout << "d[z] =";
	Print(d, z);

	int S = Sum(d, z);
	int number = Number(d, z);

	cout << "Sum = " << S << endl;
	cout << "Number = " << number << endl;

	Zero(d, z);
	cout << "d[z] =";
	Print(d, z);

	return 0;
}
