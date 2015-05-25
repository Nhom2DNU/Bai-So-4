#include<iostream>
using namespace std;
void main()
{
	int a[100], n;
	cout << "nhap n = "; cin >> n; cin.ignore();
	for (int i = 0; i < n; i++)
	{
		cout << " a[" << i + 1 << "] = "; cin >> a[i];
	}
	cout << "\nMang vua nhap: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << "  ";
	int t;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)cout << a[i];
		else t = 0;
	}
	if (t == 0)cout << "\n\nTrong mang khong co so am.";
	else cout << " la so am can tim.";
	cin.get();
}