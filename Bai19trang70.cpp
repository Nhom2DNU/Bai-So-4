#include<iostream>
using namespace std;
void nhap(int a[][100], int &n, int &m);
void xuat(int a[][100], int n, int m);
int tbmin(int a[][100], int n, int m);
void main()
{
	int a[100][100], n, m;
	nhap(a, n, m); xuat(a, n, m);
	cout << "\nKet Qua: " << tbmin(a, n, m)/n;
	cin.ignore(); cin.get();
}
void nhap(int a[][100], int &n, int &m)
{
	cout << "nhap so dong, cot: "; cin >> n >> m;
	for (int i = 0; i < n;i++)
	for (int j = 0; j < m; j++)
	{
		cout << " a[" << i + 1 << "][" << j + 1 << "] = "; cin >> a[i][j];
	}
}
void xuat(int a[][100], int n, int m)
{
	cout << "Day so vua nhap:\n\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)	cout << a[i][j] << "  ";
		cout << "\n\n";
	}
}
int tbmin(int a[][100], int n, int m)
{
	int s, t = 0;
	cout << "So min trong cot:\n\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			s = a[i][0];
			if (s > a[i][j]) s = a[i][j];
			t += s;
		}cout << s << "  "; d++;
	}
	return t/n;
}