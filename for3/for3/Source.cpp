#include <stdio.h>
int main(void){
	
	int i, a, b, c;

	c = 1;

	printf("値を入力してください\n");
	scanf_s("%d", &a);

	printf("何乗したい?\n");
	scanf_s("%d", &b);


	for (i = 0; i < b; i++){

		c = a*c;

	}

	printf("%d\n", c);

	return 0;
}