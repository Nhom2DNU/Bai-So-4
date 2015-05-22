#include<iostream>
using namespace std;
void main()
{
	int a[100][100], n,m,l;
	cout << "nhap so dong "; cin >> n; cout<< "nhap so cot"; cin >> m; cin.ignore();
	for (int i = 0; i < n; i++)
	for (int j = 0; j < m;j++)
	{
		cout << " a[" << i + 1 << "][" << j + 1 << "] = "; cin >> a[i][j]; 
	}
	cout << "\nday so vua nhap:\n\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)cout << a[i][j] << "  ";
		cout << "\n\n";
	}
	int k;
	for (int i = 0; i < n; i++)
	for (int j = 0; j < m; j++)
	{
		if (a[i][j] % 2 != 0 && a[i][j] < 0){ l = a[i][j]; k = 0; }
	}
	if (k == 0)
	{
		for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] % 2 != 0 && a[i][j] < 0)if (l < a[i][j]){ l = a[i][j];  }			
		}
		cout << "Gia Tri Le Va Am Lon Nhat La: " << l;
	}
	 
	else cout << "Khong Co Gia Tri Am Nho Nhat Trong Mang./n Xin Moi Chay Lai Chuong Trinh!";
	cin.ignore();
	cin.get();
}