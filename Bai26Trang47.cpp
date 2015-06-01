#include <iostream>
using namespace std;
void main()
{
	int a[100], n, demduong = 0, demam = 0;
	cout << "Nhap n = "; cin >> n; cin.ignore();
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i + 1 << "] = "; cin >> a[i]; cin.ignore();
	}
	cout << "\nDay so vua nhap: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << "  ";
	for (int i = 0; i < n; i++)
	{
		if (a[i]>0)demduong++;
		if (a[i] < 0)demam++;
	}
	cout << "\n\nso phan tu duong: " << demduong;
	cout << "\n\nso phan tu am: " << demam;
	cin.get();
}