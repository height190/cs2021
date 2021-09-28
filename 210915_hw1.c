#include <stdio.h>

int main(void) {

	char ch;
	int num;

	printf("Type your latter: ");
	scanf_s("%c", &ch);
	

	printf("문자 입력: %c\n", ch);

	if (ch == "A") {
		num = 65;

	}
	if (ch == "t") {
		num = 116;
	}

	printf("%c문자의 아스키 코드 값은 65입니다", ch);

	return 0;
}
