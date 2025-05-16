#include<stdio.h>
#include<string.h>

void Nhap(char a[]) 
{
    printf("Nhap chuoi: ");
    fgets(a, 100, stdin);
    
	if(a[strlen(a) - 1] == '\n') //vi fgets ket thuc bang '\n' nen thay bang '\0'
    	a[strlen(a) - 1] = '\0';
}

void Xuat(char a[]) 
{
	printf("Noi dung chuoi: ");
	for(int i = strlen(a) - 1; i >= 0; i--)
    	if(a[i] != ' ') 
			printf("%c", a[i]);
}

int main()
{
	char a[100];
	Nhap(a);
	Xuat(a);
}
