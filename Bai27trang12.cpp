#include <iostream>
using namespace std;
void main()
{
	float n, s = 0, gt = 1;
	cout << "nhap vao n :";
	cin >> n; cin.ignore();
	for (int i = 1; i <= n; i++)
	{
		gt = gt*i;
		s = s + (1 / gt);
	}
	cout << "s=" << s;
	cin.get();
}