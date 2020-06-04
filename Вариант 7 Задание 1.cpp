#include <iostream>
#include <stdio.h>

using namespace std;

typedef struct {
	unsigned cnt1;
} info;

info count(const int* a, int n) {
	info i;
	if (n > 0) {
		i = count(a + 1, n - 1);
		if ((*a % 2) == 0)
			++i.cnt1;
	}
	else
		i.cnt1 = 0;
	return i;
}

int main(void) {
	setlocale(LC_ALL, "russian");
	int  a[] = { 1, -2, -3, -4, -5, 6, 7, -8, -9, 10 };
	info i = count(a, sizeof(a) / sizeof(a[0]));
	cout << "kol-vo chetn chisel=" << i.cnt1;
	return 0;
}