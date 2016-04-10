#include <stdio.h>

int main(void) {
	char name[255];
	
	printf("Hello, Stranger. Give me your name: ");
	scanf("%s", name);
	printf("Hello, %s.\n", name);
}
