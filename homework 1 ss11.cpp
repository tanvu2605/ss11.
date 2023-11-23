#include <stdio.h>

void calculateAndPrint(int a, int b, int c, int pairNumber) {
    int sum, diff;

    if (a < b) {
        sum = b + c;
        diff = c - b;
    } else {
        sum = a + b;
        diff = a - b;
    }

    printf("cap so thu %d :\n", pairNumber);
    printf("%d + %d = %d\n", a, b, sum);
    printf("%d - %d = %d\n\n", b, a, diff);
}

int main() {
    int a, b, c;

    // Nhap gia tri tu ban phim 
    printf("nhap so a: ");
    scanf("%d", &a);

    printf("nhap so b: ");
    scanf("%d", &b);

    printf("nhap so  c: ");
    scanf("%d", &c);

    // goi ham cho tung cap so 
    calculateAndPrint(a, b, c, 1);
    calculateAndPrint(b, c, a, 2);
    calculateAndPrint(a, c, b, 3);

    return 0;
}


