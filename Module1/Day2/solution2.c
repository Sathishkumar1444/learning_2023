#include <stdio.h>

void swap(void *a, void *b, size_t size) {
    char *ptrA = (char *)a;
    char *ptrB = (char *)b;
    char temp;

    for (size_t i = 0; i < size; i++) {
        temp = ptrA[i];
        ptrA[i] = ptrB[i];
        ptrB[i] = temp;
    }
}

int main() {
    int num1 = 10, num2 = 20;
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2, sizeof(int));

    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    double dbl1 = 1.23, dbl2 = 4.56;
    printf("Before swap: dbl1 = %lf, dbl2 = %lf\n", dbl1, dbl2);

    swap(&dbl1, &dbl2, sizeof(double));

    printf("After swap: dbl1 = %lf, dbl2 = %lf\n", dbl1, dbl2);

    return 0;
}