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
	printf("Noi dung chuoi\n");
	for(int i = 0; i < strlen(a); i++)
    	if(a[i] != ' ') 
			printf("%c\n", a[i]);
}

int dem_KT (char a[])
{
	int dem = 0;
	for(int i = 0; i < strlen(a); i++)
	{
		if(a[i] != ' ' && a[i] != '\0')
			dem++;
	}
	return dem;
}

int dem_kp_nguyenam(char a[])
{
	int dem = 0;
	for(int i = 0; i < strlen(a); i++)
	{
		if(a[i] == 'U' || a[i] == 'E' || a[i] == 'O' || a[i] == 'A' || a[i] == 'I' ||
		   a[i] == 'u' || a[i] == 'e' || a[i] == 'o' || a[i] == 'a' || a[i] == 'i')
		   dem++;
	}
	return dem_KT(a) - dem;
}

int main()
{
	char a[1000];
	Nhap(a);
	Xuat(a);
	
	printf("So ky tu: %d\n",dem_KT(a));
	if(dem_kp_nguyenam(a) != 0) 
		printf("So ky tu khong phai nguyen am: %d",dem_kp_nguyenam(a));
}
