#include <iostream>
using namespace std;
void nhap(int a[], int &n);
void xuat(int a[], int n);
int tongvitringuyento(int a[], int n);
int ktnguyento(int a[], int n);
void main()
{
	int a[100], n;
	nhap(a, n); xuat(a, n);
	cout << "\n\nTong = " << tongvitringuyento(a, n);
	cin.ignore(); cin.get();
}
void nhap(int a[], int &n)
{
	cout << "nhap n = "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << " a[" << i << "] = "; cin >> a[i];
	}
}
void xuat(int a[], int n)
{
	cout << "day so vua nhap:\n\n";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "  ";
	}
}
int ktnguyento(int a)
{
	if (a < 2)return 0;
	if (a == 2 || a == 3)return 1;
	for (int i = 2; i < a; i++)if (a%i == 0)return 0;
	return 1;
}
int tongvitringuyento(int a[], int n)
{
	int s, KQ = 0;
	cout << "\nday so vi nguyen to:\n\n";
	for (int i = 0; i < n; i++)
	{
		s = a[i];
		if (ktnguyento(a[i]))
		{
			cout << s << "  "; KQ += s;
		}
	}
	return KQ;
}