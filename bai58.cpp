#include <iostream>
using namespace std;
void xuatchan(int a[], int n);
void xuatle(int a[], int n);
void nhap(int a[], int &n);
void main()
{
	int a[100];
	int n;
	nhap(a, n); cout << "Cac So Chan : "; xuatchan(a, n); cout << "\nCac So Le : "; xuatle(a, n);
	cin.ignore(); cin.get();
};
void nhap(int a[], int &n)
{
	cout << "Nhap n = "; cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cout << "a[" << i << "] = "; cin >> a[i]; cin.ignore();
		}
	
}

void xuatchan(int a[], int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (a[i] % 2 == 0)
			cout << a[i] << " ,";


	}
}
void xuatle(int a[], int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (a[i] % 2 != 0)
			cout << a[i] << " ,";


	}


}


