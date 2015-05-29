#include <iostream>
#include <string>
using namespace std;

int Tongsochan(int a[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			count++;
	}
	return count;
}

int Tongsole(int a[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
			count++;
	}
	return count;
}

int main()
{
	int a[] = { 1, 2, 3, 4, 5, 2, 4, 7, 4 };
	int chan = Tongsochan(a, 9);
	cout << "tongchan" << chan << endl; cin.ignore();
	int le = Tongsole(a, 9);
	cout << "tongchan" << le;
	return 0;
	cin.get();
}

