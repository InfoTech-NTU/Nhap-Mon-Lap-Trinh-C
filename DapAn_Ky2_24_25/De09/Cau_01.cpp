#include <stdio.h>
#define MAX 12

int laChinhPhuong(int n) {
    for (int i = 1; i * i <= n; i++)
        if (i * i == n)
            return 1;
    return 0;
}

void cau_a(int a[][MAX], int &n) {
    do {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while (n <= 2 || n > 12);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
}

void cau_b(int a[][MAX], int n) {
    printf("Cac so chinh phuong trong ma tran: ");
    int co = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (laChinhPhuong(a[i][j])) {
                printf("%d ", a[i][j]);
                co = 1;
            }
    if (!co) printf("Khong co");
    printf("\n");
}

int cau_c(int a[][MAX], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i][i];
        if (i != n - 1 - i)
            sum += a[i][n - 1 - i];
    }
    return sum;
}

void cau_d(int a[][MAX], int n) {
	int dongMax = 0, tongMax = -1e9;
    for (int i = 0; i < n; i++) {
        int tong = 0;
        for (int j = 0; j < n; j++)
            tong += a[i][j];
        if (tong > tongMax) {
            tongMax = tong;
            dongMax = i;
        }
    }
    printf("Tong lon nhat la %d nam o dong %d", tongMax, dongMax);
}

void cau_e(int a[][MAX], int n) {
	float tbc = 0.0;
    int sum = 0, cnt = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++){
        	sum += a[i][j];
        	cnt++;
		}
            
    tbc = (float)sum / cnt;
    printf("Cac phan tu nho hon trung binh cong (%.2f): ", tbc);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] < tbc)
                printf("%d ", a[i][j]);
}

int main() {
    int n, a[MAX][MAX];
    printf("Cau a:\n");
    cau_a(a, n);

    printf("Cau b: ");
	cau_b(a, n);
    
    printf("Cau c: Tong cheo chinh va phu: %d\n", cau_c(a, n));

    printf("Cau d: "); 
	cau_d(a, n);

    printf("\nCau e: "); 
	cau_e(a, n);
}
