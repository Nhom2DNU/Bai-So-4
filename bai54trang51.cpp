#include<iostream>
using namespace std;
void chenx(int a[], int n, int x);
void nhap(int a[], int &n, int &x);
void main()
{
	int a[100], n, x;
	nhap(a, n, x);
	cout << "day sau khi chen x: ";
	chenx(a, n, x);
	cin.ignore(); cin.get();
}
void chenx(int a[], int n, int x)
{ 
	a[0] = x;
	for (int i = 0; i < n; i++)cout << a[i] << "  ";
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