#include <iostream>
using namespace std;
void nhap(int a[], int &n);
void xuat(int a[], int n);
void solemax(int a[], int n);
void main()
{
	int a[100], n;
	nhap(a, n); xuat(a, n);
	solemax(a, n);
	cin.ignore(); cin.get();
}
void nhap(int a[], int &n)
{
	cout << "Nhap so n = "; cin >> n;
	for (int i = 0; i < n;i++)
	{
		cout << " a[" << i + 1 << "] = "; cin >> a[i];
	}
}
void solemax(int a[], int n)
{
	int c = 0, l, m=0;
	for (int i = 0; i < n; i++)
	{	
		if (a[i] % 2 == 0 && c < a[i])c = a[i];
	}
	cout << "\n\nso chan max = " << c;
	for (int i = 0; i < n; i++)
	{
		l = 0; 
		if (a[i] % 2 != 0){ if (l < a[i])l = a[i]; }
	}
	if (l > c)
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i] % 2 != 0 && c<a[i] && l>a[i])m = a[i];
		}
		cout << "\n\nso le min = " << m;
	}
	else cout << "\n\nkhong co so le thoa man.";

}
void xuat(int a[], int n)
{
	cout << "\nDay so vua nhap:\n\n";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
}