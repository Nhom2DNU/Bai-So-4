#include <iostream>
#include <stdio.h>
using namespace std;

void chuxenke(char *a)
{
	int n = strlen(a);
	for (int i = 0; i<n; i++)
	{
		if (i % 2 == 0)
		if ((int)a[i] >= 97 && (int)a[i] <= 122)
			a[i] = char((int)a[i] - 32);
		if (i % 2 == 1)
		if ((int)a[i] >= 65 && (int)a[i] <= 90)
			a[i] = char((int)a[i] + 32);
	}

	puts(a);
}
