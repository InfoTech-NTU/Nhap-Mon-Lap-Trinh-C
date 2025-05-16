#include<stdio.h>
#include<string.h>

void demSoLan(char s[100])
{
	char c;
	int dem = 0;
	printf("\nNhap ky tu: ");
	fflush(stdin);
	scanf("%c",&c);
	for(int i = 0; i<strlen(s); i++)
	{
		if(s[i] == c)
			dem++;
	}
	printf("Ky tu %c xuat hien %d lan",c,dem);
}

void xoaKyTu(char s[100])
{
	char c; 
    printf("\nNhap ky tu muon xoa: ");
    getchar();
    scanf("%c", &c);

    int i, j = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != c)
        	s[j++] = s[i];
    }
    s[j] = '\0'; 

    if (j > 0)
    {
        printf("Chuoi sau khi xoa '%c': ", c);
        puts(s);
    }
    else
    	printf("Chuoi khong chua ky tu '%c' hoac da bi xoa het.\n", c);
}

void tachChuoi(char s[100])
{
	int z;
	printf("Nhap do dai muon tach: ");
	scanf("%d",&z);
	printf("Cac tu co do dai %d:\n", z);
    for (int i = 0; i < strlen(s); i += z) 
	{
        for (int j = i; j < i + z && j < strlen(s); j++) 
		{
            printf("%c", s[j]);
        }
        printf("\n");
    }
}
void daoNguocTu(char s[100])
{
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
	printf("Do dai chuoi: %d", strlen(s));
	//Cau b
	demSoLan(s);
	//Cau c
	xoaKyTu(s);
	//Cau d
	tachChuoi(s);
	//Cau e
	daoNguocTu(s);
}
