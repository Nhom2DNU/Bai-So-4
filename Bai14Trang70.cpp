#include<iostream.h>
#include<conio.h>
//nhap MT
void NhapMT(int A[][10], int m, int n)
{
	for (int i = 1; i <= m; i++)
	for (int j = 1; j <= n; j++)
	{
		cout << "A[" << i << "][" << j << "]:"; cin >> A[i][j];
	}
}
//xuat MT
void XuatMT(int A[][10], int m, int n)
{
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)                  cout << A[i][j] << "\t";
		cout << "\n";
	}
}
void Sum_Chan_Matrix(int A[][10], int m, int n)
{
	int Sum = 0;
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{

			if (A[i][j] % 2 == 0)
				Sum = Sum + A[i][j];
		}
	}
	cout << Sum << "\t";
}
void main()
{
	int A[10][10], m, n;
	cout << "nhap m,n:"; cin >> m >> n;
	NhapMT(A, m, n);
	cout << "\nIn ma tran ra man hinh: \n";
	XuatMT(A, m, n);
	cout << "\nTong cac phan tu chan co trong ma tran: ";
	Sum_Chan_Matrix(A, m, n);
	cout << "\n";
}
