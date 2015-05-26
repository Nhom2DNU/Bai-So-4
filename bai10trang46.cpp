#include<iostream>
using namespace std;
void main()
{
	int a[100], n;
	double cp;
	cout << "nhap n = "; cin >> n; cin.ignore();
	for (int i = 1; i <= n; i++)
	{
		cout << " a[" << i << "] = "; cin >> a[i]; cin.ignore();
	}
	for (int i = 1; i <= n; i++)
	{
		if (i>0 && i % 2 != 0){
			cp = sqrt(a[i]); cout << cp << "  ";
		}
		
	}
	cin.get();
}