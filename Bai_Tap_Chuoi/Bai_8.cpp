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
	printf("Noi dung chuoi: %s\n",a);
}

void Chu_Hoa (char a[])
{
	for (int i = 0; i < strlen(a); i++) 
	{
		if(a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
	}
	Xuat(a);
}

void Chu_Thuong (char a[])
{
	for (int i = 0; i < strlen(a); i++) 
	{
		if(a[i] >= 'A' && a[i] <= 'Z')
			a[i] += 32;
	}
	Xuat(a);
}

void Hoa_DT(char a[]) 
{
    int flag = 1; 
    for (int i = 0; i < strlen(a); i++) 
    {
        if (a[i] == ' ') 
        {
        	flag = 1;
		}
        else if (flag == 1 && a[i] >= 'a' && a[i] <= 'z') 
        {
            a[i] -= 32; 
            flag = 0; 
        } 
        else if (flag == 0 && a[i] >= 'A' && a[i] <= 'Z') 
        {
            a[i] += 32; 
        } 
        else 
        {
            flag = 0; 
        }
    }

    Xuat(a);
}

int main()
{
	char a[1000];
	Nhap(a);
	Chu_Hoa(a);
	Chu_Thuong(a);
	Hoa_DT(a);
}
