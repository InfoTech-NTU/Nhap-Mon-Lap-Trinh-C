#include <stdio.h>
#include <string.h>

void Nhap(char a[]) 
{
    printf("Nhap chuoi: ");
    fgets(a, 100, stdin);
    
    if (a[strlen(a) - 1] == '\n') 
        a[strlen(a) - 1] = '\0';
}

void Xuat(char a[])
{
	printf("Noi dung: %s",a);
}

void XoaKT (char a[], int c)
{
	char b[100];
	int j = 0;
	for(int i = 0; i < strlen(a); i++)
	{
		if(a[i] != c)
		{
			b[j++] = a[i];
		}
	}
	Xuat(b);
}

int main()
{
	char a[100];
	int c;
	Nhap(a);
	
	printf("Nhap ky tu muon xoa: ");
	scanf("%c",&c);
	XoaKT(a,c);
}
