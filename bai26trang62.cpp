#include<iostream>
using namespace std;
void main()
{
	char a[100], b[100],t[100];
	int k,d;
	cout << "nhap chuoi 1: "; gets_s(a);
	cout << "\nnhap chuoi 2: "; gets_s(b);
	cout << "\n";
	int l1 = strlen(a), l2 = strlen(b);
	if (l2>l1)
	for (int i = 0; i < l1; i++)
	{
		d = 0;
		for (int j = 0; j < l2; j++)
		{
			if (a[i] == b[j]){
				k = 0; t[i] = a[i]; d++;
			}
			t[i+j] = '\0';	
		}
		if (k == 0)cout << t[i];
	}
	else {
		for (int i = 0; i < l2; i++)
		{
			d = 0;
			for (int j = 0; j < l1; j++)
			{
				if (b[i] == a[j]){
					k = 0; t[i] = b[i]; d++;
				}
				t[i + j] = '\0';
			}
			if (k == 0)cout << t[i];
		}

	}
	if (k != 0)cout << "khong co ky tu giong.";
	else cout << " la nhung ky tu giong.";
	cin.get();
}