#include <stdio.h>
#include <locale.h>

#define ARR_SIZE 33

int main(){
	setlocale(LC_ALL, "Rus");
	char alphabet[ARR_SIZE];

	for (int i = 0; i < ARR_SIZE; i++) {
		if (i < 6) alphabet[i] = (int)224 + i;
		else if (i == 6) alphabet[i] = (int)184;
		else alphabet[i] = (int)223 + i;
	}
	for (int i = 0; i < ARR_SIZE; printf("%c ", alphabet[i++]));

	return 0;
}