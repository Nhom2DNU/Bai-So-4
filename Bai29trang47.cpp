#include<iostream>
using namespace std;
void main()
{
	int a[100], n, x,d=0;
	cout << "nhap n = "; cin >> n;
	cout << "nhap x = "; cin >> x;
	for (int i = 0; i < n; i++)
	{
		cout << " a[" << i + 1 << "] = "; cin >> a[i];
	}
	cout << "cac so < x: ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] < x){
			d++; cout << a[i] << "  ";
		}
	}
	cout << "\nco " << d << " so < x";
	cin.ignore(); cin.get();
}
