#include <iostream> 
using namespace std;

#define MAX 100 
void Nhap(int &n)
{
	do
	{
		cout << "Nhap: ";
		cin >> n;
	} while (n <= 0 || n>MAX);
}
void NhapMang(int a[], int n)
{
	for (int i = 0; i<n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}
void xuatmang(int a[], int n)
{
	for (int i = 0; i<n; i++)
		cout << a[i] << "\t";
}
void xoa(int a[], int &n, int f)
{
	for (int i = f; i<n; i++)
		a[i] = a[i + 1];
	n--;
}
void xoa_gan_x(int a[], int n, int x)
{
	int t = x;
	for (int i = 0; i<n; i++)
	{
		if (a[i] <= x && x - a[i] <= t)
			t = x - a[i];
		if (a[i] >= x && a[i] - x <= t)
			t = a[i] - x;
	}
	for (int i = 0; i<n; i++)

		if (a[i] >= x && a[i] - x == t || a[i] <= x && x - a[i] == t)
		{
			xoa(a, n, i);    i--;
		}
	xuatmang(a, n);
}
void main()
{
	int a[MAX], n, x;
	Nhap(n);
	NhapMang(a, n);
	cout << "Mang ban dau la: ";
	xuatmang(a, n);
	cout << "Nhap gia tri cua x:";
	cin >> x; cin.get();
	cout << "\nMang sau khi xoa phan tu gan x la: \n";  xoa_gan_x(a, n, x); cin.get();
	
}