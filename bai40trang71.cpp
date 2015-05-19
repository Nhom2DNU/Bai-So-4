#include<iostream>
using namespace std;
void nhap(int a[][100], int &n, int &m);
void xuat(int a[][100], int n, int m);
int demso(int a[][100], int n, int m,int &x);
void main()
{
	int a[100][100], n, m, x;
	nhap(a, n, m); xuat(a, n, m);
	cout << "\n\nCo: " << demso(a,n, m, x) << " so nho hon.";
	cin.ignore(); cin.get();
}
void nhap(int a[][100], int &n, int &m)
{
	cout << "nhap so dong, cot: "; cin >> n >> m;
	for (int i = 0; i < n;i++)
	for (int j = 0; j < m; j++)
	{
		cout << "a[" << i + 1 << "][" << j + 1 << "] = "; cin >> a[i][j];
	}
}
void xuat(int a[][100], int n, int m)
{
	cout << "Day so vua nhap:\n\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)	cout << a[i][j] << "\t";
		cout << "\n\n";
	}
}
int demso(int a[][100], int n, int m,int &x)
{
	int s, d = 0;
	cout << "nhap so x = "; cin >> x;
	cout << "\nCac so nho hon" << x << "\n\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] < x)
			{
				s = a[i][j]; cout << s << "  "; d++;
			}
			
		}
	}
	return d;
}