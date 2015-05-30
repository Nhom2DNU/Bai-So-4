#include <iostream> 
using namespace std;
void nhap(int a[], int &n);
void sosanh(int a[], int n);
void main()
{
	int n;
	int a[100];
	nhap(a, n); cout << "Bieu Thuc Da Qua Rut Gon\n"; sosanh(a, n);
	cin.get();

}
void nhap(int a[], int &n){
	cout << "Nhap n = "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "a[" << i << "] = "; cin >> a[i]; cin.ignore();

	}

}

void sosanh(int a[], int n){
	int dem = 0;
	int z = 1;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= i; j++)
		{
			if (a[i] == a[j])dem++;

		}
		if (dem == 1 ){
			cout << "a[" <<z<< "] = " << a[i] << "\t"; z++;
		}; dem = 0;

	}


}