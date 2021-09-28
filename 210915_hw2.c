/***** 정수연산 *****/
/* name : Luke
   date : 210928 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE* infile;
    int i;
    int no_cases, start, end;
    int a, b;

    infile = fopen("input.txt", "r");       /* open inpute file */
    if (infile == NULL)
        exit(1);

    fscanf(infile, "%d", &no_cases);        /* read the number of test cases */

    for (i = 0; i < no_cases; i++) {

        fscanf(infile, "%d %d", &a, &b);   /* read two number */

        printf("%d %d", a + b, a - b);         // 합과 차

        // write your code

        if ((a != b) && (a > b)) {
            printf("% d, % d, % d, % d, % d, 0\n", abs(a - b), a * b, a / b, a % b, a);
        }
        else if ((a = b) && (a > b)) {
            printf("%d, %d, %d, %d, %d, 1\n", abs(a - b) , a * b, a / b, a % b, a);
        }
        else if ((a != b) && (a < b)) {
            printf("%d, %d, %d, %d, %d, 0\n", abs(a - b) , a * b, a / b, a % b, b);
        }
        else if ((a = b) && (a < b)) {
            printf("%d, %d, %d, %d, %d, 1\n", abs(a - b) , a * b, a / b, a % b, b);
        }

    }

    fclose(infile);                         /* close input file */
}