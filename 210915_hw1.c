#include <stdio.h>

int main(void) {

	char ch;
	int num;

	printf("문자 입력: ");
	scanf_s("%c", &ch);

	if (ch == 'A') {
		num = 65;
	}
	else if (ch == 't') {
		num = 116;
	}

	printf("%c문자의 아스키 코드 값은 %d입니다", ch, num);

	return 0;
}