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
	printf("Noi dung chuoi: %s",a);
}

int KiemTraDoiXung(char a[]) 
{
    for (int i = 0; i < strlen(a) / 2; i++) 
	{
        if (a[i] != a[strlen(a) - i - 1]) 
			return 0;
    }
    return 1; 
}

int main()
{
	char a[100];
	Nhap(a);
	Xuat(a);
	
	if(KiemTraDoiXung(a) == 1) printf("\nChuoi doi xung");
	else printf("\nChuoi khong doi xung");
}
