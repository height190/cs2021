#include <stdio.h>

int main(void) {

	char ch;
	int num;

	printf("Type your latter: ");
	scanf_s("%c", &ch);
	

	printf("���� �Է�: %c\n", ch);

	if (ch == "A") {
		num = 65;

	}
	if (ch == "t") {
		num = 116;
	}

	printf("%c������ �ƽ�Ű �ڵ� ���� 65�Դϴ�", ch);

	return 0;
}
