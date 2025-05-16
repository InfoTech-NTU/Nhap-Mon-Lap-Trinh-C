#include<stdio.h>
#include<string.h>

void demKyTuNA(char s[100])
{
	int dem = 0;
	for(int i = 0; i < strlen(s); i++){
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] =='o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] =='O' || s[i] == 'U')
			dem++;		
	}
	printf("So luong ky tu nguyen am: %d\n",dem);
}

void daoNguocChuoi(char s[100])
{
	strrev(s);
	printf("Dao nguoc chuoi: ");
	puts(s);
}

void daoNguocTu(char s[100])
{
	strrev(s);
	printf("Dao nguoc chuoi theo tu: ");
	int len = strlen(s);
    int end = len - 1;

    while (end >= 0 && s[end] == ' ') end--;

	//Cau lac bo tin hoc
    while (end >= 0) {
        int start = end;
        while (start >= 0 && s[start] != ' ') start--;

        for (int i = start + 1; i <= end; i++) {
            printf("%c", s[i]);
        }

        if (start > 0) printf(" ");

        end = start - 1;
    }
    printf("\n");
}

int main()
{
	char s[100];
	//Cau a
	printf("Nhap chuoi: ");
	gets(s);
	printf("Noi dung chuoi: ");
	puts(s);
	printf("Do dai chuoi: %d\n", strlen(s));
	//Cau b
	demKyTuNA(s);
	//Cau c
	daoNguocChuoi(s);
	//Cau d
	daoNguocTu(s);
}
