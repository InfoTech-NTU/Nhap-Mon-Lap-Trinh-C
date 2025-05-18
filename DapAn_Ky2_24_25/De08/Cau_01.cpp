#include <stdio.h>
#define MAX 10

void cau_a(int a[][MAX], int &n) {
	do{
		scanf("%d", &n);
	}while(n < 2 || n > 10);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
}

void cau_b(int a[][MAX], int n) {
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

int cau_c(int a[][MAX], int n) {
    int sum = 0;
    for (int i = 1; i < n; i++)
        for (int j = 0; j < i; j++)
            if (a[i][j] % 2 != 0)
                sum += a[i][j];
    return sum;
}

int cau_d(int a[MAX][MAX], int n) {
	/*
	1 2
	2 1
	*/
    int max1 = a[0][0], max2 = -1e9;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            if (a[i][j] > max1) {
                max2 = max1;
                max1 = a[i][j];
            } else if (a[i][j] > max2 && a[i][j] < max1) {
                max2 = a[i][j];
            }
        }
    return max2;
}

int cau_e(int a[][MAX], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i][i] == x || a[i][n - 1 - i] == x)
            return 1;
    }
    return 0;
}

int main() {
    int n, a[MAX][MAX];
    printf("Cau a:\n");
    cau_a(a, n);

    printf("Ma tran vua nhap:\n");
    cau_b(a, n);

    printf("Tong so le o tam giac duoi duong cheo chinh: %d\n", cau_c(a, n));

    int max2 = cau_d(a, n);
    printf("Phan tu lon thu hai trong ma tran: %d\n", max2);

    int x;
    printf("Nhap x: ");
    scanf("%d", &x);
    if (cau_e(a, n, x))
        printf("%d xuat hien tren duong cheo\n", x);
    else
        printf("%d khong xuat hien tren duong cheo\n", x);

    return 0;
}
