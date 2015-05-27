#include<iostream>
#include<time.h>
#define MAX 100
using namespace std;
void Input_Matrix(int a[][MAX], int d, int c);
void main()
{
	int a[MAX][MAX],d,c;
	Input_Matrix(a,d,c);
	cin.ignore();cin.get();
}
void Input_Matrix(int a[][MAX], int d, int c)
{
	int i, j;
	cout <<"nhap d,c:";cin >>d>>c;
	for(i=0; i<d; i++)
	{
		for(j=0;j<c; j++)
		{
			cout<<"Nhap phan tu["<<i<<"]["<<j<<"]: ";
			do
			{
				cin>>a[i][j];
				if(a[i][j]<1)
					cout<<"Nhap sai, nhap lai["<<i<<"]["<<j<<"]: ";
			}while(a[i][j]<1);
		}
	}
}