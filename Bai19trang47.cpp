#include<iostream>
using namespace std;
void main()
{
	int a[100], n,min;
	cout << "nhap n = "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << " a[" << i + 1 << "] = "; cin >> a[i];
	}
	cout << "\nDay vua nhap: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << "  ";
	int max = a[0],k;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0 && max <= a[i])max = a[i];
		k = 0;
	}
	if (k == 0)
	{
		for (int i = 0; i < n; i++)
		if (a[i] > 0 && a[i] <= max)min = a[i];
		cout << "\n\nso duong be nhat: " << min;
	}
	else cout << "\n\nkhong co so duong be nhat.";
	cin.ignore();
	cin.get();
	
}