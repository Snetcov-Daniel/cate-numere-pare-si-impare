#include <iostream>
using namespace std;

int main()
{
	cout << "Introduceti cate cifre va avea vectorul" << endl;
	int size;
	cin >> size;

	int* arr = new int[size];

	cout << "1.Introduceti cifrele sinestatator" << endl;
	cout << "2.Cifrele vor fi alese de calculator" << endl;
	int v1;
	cin >> v1;
	switch (v1)
	{
	case 1:

		for (int i = 0; i < size; i++)
		{
			cout << "Introduceti " << i << ".numar: " << endl;
			cin >> arr[i];
		}
		break;

	case 2:

		cout << "Pana la care numar sa fie generate numerele?" << endl;
		int lim;
		cin >> lim;

		for (int i = 0; i < size; i++)
		{
			arr[i] = rand() % lim;
		}
		break;

	default: cout << "A-ti introdus un carater incorect" << endl;
	}

	cout << "Doriti sa aflati ce numere se afla in vector?" << endl;
	cout << "Da - 1 \t Nu - 2" << endl;
	int v2;
	cin >> v2;
	switch (v2)
	{
	case 1:
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << endl;
		}
	}
	break;

	case 2:
	break;
	}
	
	cout << "Ce doriti sa aflati?" << endl;
	cout << "1.Cate numere pare sunt in vector" << endl;
	cout << "2.Cate nuemre impare sunt in vector" << endl;
	int v3;
	int lenghtp = 0;
	int lenghti = 0;
	cin >> v3;
	switch (v3)
	{
		case 1:
			for (int i = 0; i < size; i++)
			{
				int temp;
				temp = arr[i];
				if (temp % 2 == 0 && temp != 0)
				{
					lenghtp++;
				}
			}
			cout << "Numarul de cifre pare in vector sunt: " << lenghtp << endl;
		break;
		case 2:
			for (int i = 0; i < size; i++)
			{
				int temp;
				temp = arr[i];
				if (temp % 2 != 0 && temp != 0)
				{
					lenghti++;
				}
			}
			cout << "Numarul de cifre impare in vector sunt: " << lenghti << endl;
		break;
		default: cout << "A-ti introdus un caracter incorect " << endl;
		break;
	}
}