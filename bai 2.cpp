#include <stdio.h>
#include <math.h>

// Hàm kiểm tra xem một số có phải là số chính phương hay không
int laSoChinhPhuong(int num) {
    int squareRoot = sqrt(num);
    return (squareRoot * squareRoot == num);
}

// Hàm đếm và in ra các số chính phương nhỏ hơn n
void demVaInSoChinhPhuong(int n) {
    printf("Cac so chinh phuong nho hon %d la: ", n);
    for (int i = 1; i <= n; ++i) {
        if (laSoChinhPhuong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n = 50;
    printf("Nhap vao mot so nguyen duong n: ");
    scanf("%d", &n);

    demVaInSoChinhPhuong(n);

    return 0;
}
