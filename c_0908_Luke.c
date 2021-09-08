#include <stdio.h>
#include <string.h>


/*주석*/
// 요것도 주석

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
    char fruit[20] = "Strawbarry"; // 문자수 + 1 해서 [] 안에 넣어줘
    // 앞에 const를 넣으면 절대 안바뀐다
    const int number = 10;
    printf("%d", number);

    printf("%s\n", fruit);
    strcpy(fruit, "Bababa");
    printf("%s\n", fruit);


    printf("float형 변수의 값: %.20f\n", ft);
    printf("doable형 변수의 값: %.20f\n", db);

    a = 15;
    b = 10;
    c = a + 20;
    da = 3.5;
    ch = 'A';

    // unsigned int
    unsigned int lol;
    lol = 4294967295;
    printf("%d\n", lol); // %d는 앞에 부호도 신경써서
    lol = -1;
    printf("%u\n", lol); // %u는 앞에 부호 상관 없이

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


    printf("변수 a의 값 : %d\n", a);
    printf("변수 d의 값 : %d\n", b);
    printf("변수 c의 값 : %d\n", c);
    printf("변수 da의 값 : %.1lf\n", da);
    printf("변수 ch의 값 : %.c\n", ch);
    printf("내 이름은 %s\n", name);
    printf("문자 %c의 아스키 코드 값: %d\n", ch1, ch2);
    printf("아스키 코드값이 %d인 문자: %c\n", ch2, ch1);



    return 0;
}