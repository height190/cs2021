#include <stdio.h>
#include <string.h>


/*�ּ�*/
// ��͵� �ּ�

// char <= short <= int <= long <= longlong
// float, bouble, long float

int main(void){
    int a, b, c;
    double da;
    char ch;
    char name[] = "Luke Lee";
    char ch1 = 'A';
    char ch2 = 65;
    float ft = 1.234567890123456789;
    double db = 1.234567890123456789;
    char fruit[20] = "Strawbarry"; // ���ڼ� + 1 �ؼ� [] �ȿ� �־���
    // �տ� const�� ������ ���� �ȹٲ��
    const int number = 10;
    printf("%d", number);

    printf("%s\n", fruit);
    strcpy(fruit, "Bababa");
    printf("%s\n", fruit);


    printf("float�� ������ ��: %.20f\n", ft);
    printf("doable�� ������ ��: %.20f\n", db);

    a = 15;
    b = 10;
    c = a + 20;
    da = 3.5;
    ch = 'A';

    // unsigned int
    unsigned int lol;
    lol = 4294967295;
    printf("%d\n", lol); // %d�� �տ� ��ȣ�� �Ű�Ἥ
    lol = -1;
    printf("%u\n", lol); // %u�� �տ� ��ȣ ��� ����

    int first_num;
    printf("What is your first number?:");
    scanf_s("%d", &first_num);

    int second_num;
    printf("What is your second number?:");
    scanf_s("%d", &second_num);

    

    if (first_num > second_num) {
        printf("Your first number is bigger than your second number\n");
    }
    if (first_num < second_num) {
        printf("your second number is bigger than your first number\n");
    }
    if (first_num == second_num) {
        printf("Two numbers are equal\n");
    }


    printf("���� a�� �� : %d\n", a);
    printf("���� d�� �� : %d\n", b);
    printf("���� c�� �� : %d\n", c);
    printf("���� da�� �� : %.1lf\n", da);
    printf("���� ch�� �� : %.c\n", ch);
    printf("�� �̸��� %s\n", name);
    printf("���� %c�� �ƽ�Ű �ڵ� ��: %d\n", ch1, ch2);
    printf("�ƽ�Ű �ڵ尪�� %d�� ����: %c\n", ch2, ch1);



    return 0;
}