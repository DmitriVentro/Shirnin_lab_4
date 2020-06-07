#include <iostream>

using namespace std;

float AVG_arr(float* Arr, int ind, int n);
int Sum(int a, int b);
int G(int n);
int F(int n);


int main()
{
	setlocale(LC_ALL, "Russian");

	//----------------------------------------------------

	float Arr[5];
	for (int i = 0; i < 5; i++)
	{
		Arr[i] = i + 1;
		cout << Arr[i] << " ";
	}

	cout << endl << "Среднее значение:" << AVG_arr(Arr, 4, 5) << endl;

	//-----------------------------------------------------

	int a = 20;
	int b = 30;
	cout << endl << "A = " << a << endl;
	cout << "B = " << b << endl;
	cout << "Сумма двух чисел: " << Sum(a, b);

	//---------------------------------------------------

	cout << endl << endl << "F = ";
	for (int i = 1; i < 10; i++)
		cout << F(i) << " ";

	cout << endl << endl << "G = ";
	for (int i = 1; i < 10; i++)
		cout << G(i) << " ";

	//------------------------------------------------

	return 0;
}


int F(int n)
{
	if (n == 1)
		return 1;
	else
		return F(n - 1) - G(n - 1);
}

int G(int n)
{
	if (n == 1)
		return 1;
	else
		return F(n - 1) + G(n - 1);
}

int Sum(int a, int b)
{
	if (b == 0)
		return a;
	else
		return 1 + Sum(a, b - 1);
}


float AVG_arr(float* Arr, int ind, int n)
{
	if (ind == 0)
		return Arr[ind] / n;
	else
		return Arr[ind] / n + AVG_arr(Arr, ind - 1, n);
}
