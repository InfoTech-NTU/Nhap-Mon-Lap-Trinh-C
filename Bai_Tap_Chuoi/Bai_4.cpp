#include<stdio.h>
#include<string.h>

void Nhap(char a[]) 
{
    printf("Nhap chuoi: ");
    fgets(a, 100, stdin);
    
	if(a[strlen(a) - 1] == '\n') //vi fgets ket thuc bang '\n' nen thay bang '\0'
    	a[strlen(a) - 1] = '\0';
}

void Thay_nguyenam(char a[])
{
	for(int i = 0; i < strlen(a); i++)
	{
		if(!(a[i] == 'U' || a[i] == 'E' || a[i] == 'O' || a[i] == 'A' || a[i] == 'I' ||
		   a[i] == 'u' || a[i] == 'e' || a[i] == 'o' || a[i] == 'a' || a[i] == 'i'))
		   a[i] = '_';
	}
	printf("Noi dung chuoi: %s",a);
}

int main()
{
	char a[100];
	Nhap(a);
	Thay_nguyenam(a);
}
