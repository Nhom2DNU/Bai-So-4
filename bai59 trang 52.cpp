#include <iostream>
using namespace std;

void swap(int* a, int* b)	{

	*a ^= *b ^= *a ^= *b;
}

void process(int* a, int left, int right)		{

	if (left >= right)
		return;

	int l = left, r = right;
	while (a[l] % 2 == 0)
		l++;

	while (a[r] % 2 == 1)
		r--;

	if (l < r)	{

		swap(&a[l], &a[r]);
	}
	process(a, l + 1, r - 1);
}

void output(int* a, int n)	{

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

int main() {

	int m, n;
	cin >> m >> n;

	int* a = new int[m];
	int* b = new int[n];
	int* c = new int[m + n];
	int j = 0;

	for (int i = 0; i < m; i++)	{

		cin >> a[i];
		c[j] = a[i];
		j++;
	}

	for (int i = 0; i < n; i++)	{

		cin >> b[i];
		c[j] = b[i];
		j++;
	}
	
	j--;
	process(c, 0, j);

	output(c, j);

	delete[3,2,5,7,9] a;
	
	cin.ignore();
	cin.get();
}