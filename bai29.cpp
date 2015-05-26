#include <iostream>
using namespace std;
void nhap(int a[], int &n);
void main(){
	int x, n;
	int a[100];
	cout << "Nhap x = "; cin >> x; cin.ignore();
	nhap(a, n);
	for (int i = 1; i <= n; i++){
		if (a[i] < x)cout << "\na[" << i << "] = " << a[i] << "    Nho hon x \n"; 
	}
	cin.get();
}
void nhap(int a[], int &n)
{
	cout << "Nhap n = "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "a[" << i << "] = "; cin >> a[i]; cin.ignore();
	}

}