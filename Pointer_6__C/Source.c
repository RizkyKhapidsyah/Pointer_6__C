#include <stdio.h>
#include <conio.h>

/* Created by Rizky Khapidsyah */

int main() {
	int a, * p;
	
	p = &a;
	*p = 25;

	printf("Nilai a = %d", a);

	_getch();
	return 0;
}