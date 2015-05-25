#include<iostream>
using namespace std;
void nhap(int a[], int &n);
void xuat(int a[], int n);
void solap(int a[], int n);
void main()
{
	int a[100], n,d=0;
	nhap(a, n); xuat(a, n);
	solap(a, n);
	cin.ignore(); cin.get();
}
void nhap(int a[], int &n)
{
	cout << "nhap n = "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << " a[" << i + 1 << "] = "; cin >> a[i];
	}
}
void xuat(int a[], int n)
{
	cout << "\nDay so vua nhap:\n\n";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "  ";
	}
}
void solap(int a[], int n)
{
	int d=0,l,k;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j <n ; j++)if (a[i] == a[j]){ d++; cout << a[i]<<" "; }
		d = 0;
	}
	cout << d;
}