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

void KySo (char a[])
{
	char b[100];
	int j = 0;
	for(int i = 0; i < strlen(a); i++)
	{
		if(a[i] >= '0' && a[i] <= '9')
		{
			b[j++] = a[i];
		}
	}
	if(j != 0) Xuat(b);
	else printf("Chuoi khong co ky so");
}

int main()
{
	char a[100];
	Nhap(a);
	KySo(a);
}
