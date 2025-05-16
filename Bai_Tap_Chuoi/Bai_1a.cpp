#include<stdio.h>
#include<string.h>

void Nhap (char a[])
{
	printf("Nhap chuoi: ");
	fgets(a,100,stdin);
}

void Xuat (char a[])
{
	printf("Noi dung: %s",a);
}


int KT_kt (char a[], char c)
{
	int dem = 0;
	for(int i = 0; i < strlen(a); i++)
	{
		if(a[i] == c)
		dem++;
	}
	return dem;
}

int main()
{
	char a[100];
	Nhap(a);
	Xuat(a);
	
	char c;
	printf("Nhap ky tu c = ");
	scanf("%c",&c);
	
	if(KT_kt(a,c) == 0) 
		printf("Khong co ky tu '%c' trong chuoi",c);
	else 
		printf("Co ky tu '%c' trong chuoi. So lan xuat hien la %d",c,KT_kt(a,c));	
}
