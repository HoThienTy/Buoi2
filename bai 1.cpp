#include <stdio.h>

void inBoiCuaBay() {
    printf("Các số nguyên có 2 chữ số và là bội của 7 là:\n");
    for (int i = 14; i < 100; i += 7) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    inBoiCuaBay();
    return 0;
}
