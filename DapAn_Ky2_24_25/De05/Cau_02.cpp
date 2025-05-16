#include<stdio.h>
#include<string.h>

void demKySo(char s[100])
{
	int dem = 0;
	for(int i = 0; i<strlen(s); i++)
	{
		if(s[i] >= '0' && s[i] <= '9')
		{
			dem++;
		}
	}
	if(dem != 0)
	{
		printf("\nSo luong ky so: %d",dem);
	}
	else printf("\nChuoi khong co ky so");
}

void inSpace(char s[100])
{
	printf("\nIn cac ky tu cach nhau khoang trang: ");
	for(int i = 0; i<strlen(s); i++)
	{
		if(s[i] != ' ') printf("%c ",s[i]);
	}
}

int check2Chuoi(char s[100], char a[100])
{
	int lenS = strlen(s);
	int lenA = strlen(a);
	if(lenS != lenA) return 0;
	
	for(int i = 0; i<lenS; i++)
	{
		if(s[i] != a[i])
			return 0;
	}
	return 1;
}

int demkt(char s[100], char c)
{
	int dem = 0;
	for(int i = 0; i < strlen(s); i++)
	{
		if(s[i] == c)
			dem++;
	}
	return dem;
}

int checkTonTai(char a[100], int c)
{
	for(int i = 0; i < strlen(a); i++)
	{
		if(a[i] == c)
			return 0;
	}
	return 1;
}

void tanSuat(char s[100])
{
	printf("\nTan suat cua cac ky tu: \n");
	int dem[100];
	int d = 0;
	char daDem[100];
	int dd = 0;
	for(int i = 0; i<strlen(s); i++)
	{
		if(s[i] != ' ' && checkTonTai(daDem,s[i]))
		{
			daDem[dd++] = s[i];
			dem[d++] = demkt(s,s[i]);
		}
	}
	
	for(int i = 0; i<d; i++)
	{
		printf("ky tu %c xuat hien %d\n",daDem[i],dem[i]);
	}
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
	demKySo(s);
	//Cau c
	inSpace(s);
	//Cau d
	char a[100];
	printf("\nNhap chuoi moi: ");
	gets(a);
	if(check2Chuoi(s,a)) printf("=> Hai chuoi giong nhau\n");
	else printf("=> Hai chuoi khac nhau\n");
	//Cau e
	tanSuat(s);
	
}
