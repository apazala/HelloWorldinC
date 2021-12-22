#include <stdio.h>

char s[100];

int main() {
	fgets(s, 100, stdin);

	printf("Hello, World!\n%s", s);

	return 0;
}