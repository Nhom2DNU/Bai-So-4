#include <iostream>
using namespace std;
void main()
{
	int a[100], n;
	int t;
	cout << "nhap n = "; cin >> n; cin.ignore();
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i + 1 << "]="; cin >> a[i]; cin.ignore();
	}
	cout << "so chan nho hon 20: ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0 && a[i] < 20){
			t = 0; cout << a[i] << "  ";
		}
	}
	if (t != 0) cout << "khong co so thoa man.";
	cin.get();
}