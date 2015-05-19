#include<iostream>
using namespace std;
int ktnguyento(int a);
void main()
{
	int a[100], n, m, s = 0;
	cout << "Nhap n = "; cin >> n; cin.ignore();
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i + 1 << "] = "; cin >> a[i]; cin.ignore();
	}
	cout << "\nDay so vua nhap:\n\n";
	for (int i = 0; i < n; i++)cout << a[i] << "  ";
	cout << "\n\nDay so nguyen to:\n\n";
	for (int i = 0; i < n; i++)
	{
		if (ktnguyento(a[i]))
		{
			cout << a[i] << "  ";
			s += a[i];
			m = 0;
		}
	}
	if (m==0)cout << "\n\nTong cac so nguyen to = " << s;
	else cout << "Khong co so nguyen to trong mang.";
	cin.get();
}
int ktnguyento(int a)
{
	if (a < 2)return 0;
	if (a == 2 || a == 3)return 1;
	for (int i = 2; i < a; i++)if (a%i == 0)return 0;
	return 1;
}