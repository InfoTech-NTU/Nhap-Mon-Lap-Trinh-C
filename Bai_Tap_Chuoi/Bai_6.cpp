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

void ChuanHoa(char a[]) 
{
    int   j = 0;

    for (int i = 0; i < strlen(a); i++) 
	{
        if (a[i] != ' ' || (i > 0 && a[i - 1] != ' ')) 
		{
            a[j++] = a[i];
        }
    }

    if (j > 0 && a[j - 1] == ' ' && a[j-1] == '\n') {
        j--;
    }

    a[j] = '\0'; 
}

int main()
{
	char a[100];
	Nhap(a);
	ChuanHoa(a);
	Xuat(a);
}
