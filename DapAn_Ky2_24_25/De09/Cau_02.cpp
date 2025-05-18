#include <stdio.h>
#include <string.h>
#include <ctype.h>

int laSo(char c) {
    return c >= '0' && c <= '9';
}

int laNguyenAm(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

void cau_b(char *s) {
	char sout[100];
    int j = 0;
    for (int i = 0; s[i]!='\0'; i++) {
        if (!laSo(s[i]))
            sout[j++] = s[i];
    }
    sout[j] = '\0';
    printf("Chuoi sau khi loai bo ky tu so: %s\n", sout);
}

void cau_c(char *s) {
	char tmp[100];
	strcpy(tmp, s);
    for (int i = 0; tmp[i]!='\0'; i++) {
        if (laNguyenAm(tmp[i]))
            tmp[i] = '#';
    }
    printf("Chuoi sau khi thay nguyen am: %s\n", tmp);
}

void cau_d(char *s) {// my HEART Is broKen BY her
	char tmp[100];
	strcpy(tmp, s);
    int cnt = 0;
    int index = 0;

    for (int i = 0; i <= strlen(tmp); i++) {
        if (tmp[i] == ' ' || tmp[i] == '\0') {
            int all_upper = 1;

            for (int j = index; j < i; j++) {
                if (!(tmp[j] >= 'A' && tmp[j] <= 'Z')) {
                    all_upper = 0;
                    break;
                }
            }

            if (all_upper)
                cnt++;

            index = i + 1;
        }
    }

    printf("So tu viet hoa hoan toan: %d\n", cnt);
}


void cau_e(char *s1) {
	char s2[100];
	printf("Nhap chuoi thu hai: ");
	gets(s2);
    int len1 = strlen(s1);
    s1[len1] = ' ';
    int i = 0;
    while (s2[i]) {
        s1[len1 + 1 + i] = s2[i];
        i++;
    }
    s1[len1 + 1 + i] = '\0';
    printf("Chuoi sau khi ghep: %s\n", s1);
}

int main() {
    char s[100];
    printf("Cau a: ");
    gets(s);
    printf("Chuoi vua nhap: %s\n", s);

    printf("Cau b: ");
    cau_b(s);

    printf("Cau c: ");
    cau_c(s);

    printf("Cau d: ");
    cau_d(s);

    printf("Cau e: ");
  	cau_e(s);
}
