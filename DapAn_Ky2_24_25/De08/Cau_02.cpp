#include <stdio.h>
#include <string.h>
#include <ctype.h>

void cau_b(char *s) {
    int count[5] = {0}; // a, e, i, o, u
    for (int i = 0; s[i]; i++) {
        char c = tolower(s[i]);
        if (c == 'a') count[0]++;
        else if (c == 'e') count[1]++;
        else if (c == 'i') count[2]++;
        else if (c == 'o') count[3]++;
        else if (c == 'u') count[4]++;
    }
    printf("So lan xuat hien cua nguyen am:\n");
    printf("a: %d\ne: %d\ni: %d\no: %d\nu: %d\n", count[0], count[1], count[2], count[3], count[4]);
}

void cau_c(char *s) {
    for (int i = 0; s[i]; i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
    }
}

int cau_d(char *s) {
    int cnt = 1;
    for (int i = 0; s[i]!='\0'; i++) {
        if (s[i] == ' ') {
            cnt++;
        }
    }
    return cnt;
}

int cau_e(char *s) {
    char temp[100];
    int len = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ')
            temp[len++] = tolower(s[i]);
    }
    temp[len] = '\0';

    for (int i = 0; i < len / 2; i++) {
        if (temp[i] != temp[len - 1 - i])
            return 0;
    }
    return 1;
}

int main() {
    char s[100];
    printf("Cau a: ");
    gets(s);
    printf("Chuoi vua nhap: %s\n", s);
    printf("Do dai: %d\n", strlen(s));

	printf("Cau b: ");
    cau_b(s);

	printf("Cau c: ");
    cau_c(s);
    printf("Chuoi sau khi doi hoa-thuong: %s\n", s);

	printf("Cau d: ");
    printf("So tu trong chuoi: %d\n", cau_d(s));

	printf("Cau e: ");
    if (cau_e(s))
        printf("I love chemistry\n");
    else
        printf("!YES\n");
}
