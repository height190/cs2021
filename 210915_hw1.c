#include <stdio.h>

int main(void) {

	char ch;
	int num;

	printf("���� �Է�: ");
	scanf_s("%c", &ch);

	if (ch == 'A') {
		num = 65;
	}
	else if (ch == 't') {
		num = 116;
	}

	printf("%c������ �ƽ�Ű �ڵ� ���� %d�Դϴ�", ch, num);

	return 0;
}