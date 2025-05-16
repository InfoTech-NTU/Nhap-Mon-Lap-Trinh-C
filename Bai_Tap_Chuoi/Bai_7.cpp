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

int Dem_tu (char a[])
{
	int dem = 1;
	for (int i = 0; i < strlen(a); i++)
	{
		if(a[i] == ' ')
			dem++;
	}
	return dem;	
}

void Tu_DT(char a[])
{
	printf("\nTu dau tien: ");
	for (int i = 0; i < strlen(a); i++)
	{
		if(a[i] != ' ')
		{
			printf("%c",a[i]);
		}
		else
			break;
	}
}

void Tu_CC(char a[])
{
	char b[100];
	int j = 0;
	printf("\nTu cuoi cung: ");
	for (int i = strlen(a) - 1; i >= 0; i--)
	{
		if(a[i] != ' ')
		{
			b[j++] = a[i];
		}
		else
			break;
	}
	for (int i = j - 1; i >= 0; i--)
	{
		printf("%c",b[i]);
	}
}

void In_Dong (char a[])
{
	printf("\nNoi dung in tren mot dong: \n");
	for(int i = 0; i < strlen(a); i++)
	{
		if(a[i] == ' ')
			printf("\n");
		else 
			printf("%c",a[i]);
	}
}

int main()
{
	char a[1000];
	Nhap(a);
	ChuanHoa(a);
	Xuat(a);
	printf("\nSo tu: %d",Dem_tu(a));
	Tu_DT(a);
	Tu_CC(a);
	In_Dong(a);
}
