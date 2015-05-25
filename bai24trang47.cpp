#include<iostream>
using namespace std;
void nhap(int a[], int &n,int &x);
void xuat(int a[], int n,int &x);
void main()
{
	int a[100], n, x;
	nhap(a, n, x); xuat(a, n, x);
	cin.ignore(); cin.get();
}
void nhap(int a[], int &n, int &x)
{ 
	cout << "nhap n = "; cin >> n;
	cout << "nhap x = "; cin >> x;
	for (int i = 0; i < n; i++)
	{
		cout << " a[" << i + 1 << "] = "; cin >> a[i];
	}
}
void xuat(int a[], int n, int &x)
{
	cout << "so can tim: ";
	for (int i = 0; i < n; i++)
	{
		if (a[i]>0&&a[i] <= x)cout << a[i] << "  ";
	}
}
