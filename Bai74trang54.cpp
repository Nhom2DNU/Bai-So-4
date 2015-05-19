#include <iostream>
using namespace std;
void nhap(int a[], int &n);
void xuat(int a[], int n);
void sochanmax(int a[], int n);
void main()
{
	int a[100], n;
	nhap(a, n); xuat(a, n);
	sochanmax(a, n);
	cin.ignore(); cin.get();
}
void nhap(int a[], int &n)
{
	cout << "Nhap so n = "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << " a[" << i + 1 << "] = "; cin >> a[i];
	}
}
void sochanmax(int a[], int n)
{
	int c, l = 0, m = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0 && l < a[i])l = a[i];
	}
	cout << "\n\nso le max = " << l;
	for (int i = 0; i < n; i++)
	{
		c = 0;
		if (a[i] % 2 == 0){ if (c < a[i])c = a[i]; }
	}
	if (c > l)
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i] % 2 != 0 && l<a[i] &&c>a[i])m = a[i];
		}
		cout << "\n\nso chan min = " << m;
	}
	else cout << "\n\nkhong co so chan thoa man.";

}
void xuat(int a[], int n)
{
	cout << "\nDay so vua nhap:\n\n";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
}