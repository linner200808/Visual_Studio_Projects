#include <stdio.h>

int main(){
	int n;  /* 入力する数*/

		scanf_s("%d", &n);

	/* 逆数を求める /* 結果は小数で表示する */ 
		printf("%f\n", 1.0 / n);

	return 0;
}