//done
#include <iostream>
using namespace std;
void nhap(int a[], int &n);
void xuat(int a[], int n);
int tongvitrichan(int a[], int n);
void main()
{
	int a[100], n;
	nhap(a, n); xuat(a, n);
	cout << "\n\nTong = "<<tongvitrichan(a, n);
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
int tongvitrichan(int a[], int n)
{
	int s,KQ=0;
	cout << "\nday so vi tri chan:\n\n";
	for (int i = 0; i < n; i++)
	{
		s = a[i];
		if (i>0 && i % 2 == 0)
		{
			cout << s << "  "; KQ += s;
		}
	}
	return KQ;
}