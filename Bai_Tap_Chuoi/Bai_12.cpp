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

void Xoa_Khoang (char a[], int vt, int n)
{
	char b[100];
	int j = 0;
	for(int i = 0; i<strlen(a); i++)
	{
		if(i < vt || i > vt+n)
		{
			b[j++] = a[i];
		}
	}
	Xuat(b);
}

int main()
{
	char a[100];
	int n;
	int vt;
	Nhap(a);
	
	printf("Vi tri bat dau xoa: ");
	scanf("%d",&vt);
	printf("So luong muon xoa: ");
	scanf("%d",&n);
	Xoa_Khoang(a,vt,n);
}
