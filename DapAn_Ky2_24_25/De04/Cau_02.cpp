#include<stdio.h>
#include<string.h>

void demKySo(char s[100])
{
	int dem = 0;
	for(int i = 0; i<strlen(s); i++)
	{
		if(s[i] >= '0' && s[i] <= '9')
		{
			dem++;
			s[i] = '*';
		}
	}
	if(dem != 0)
	{
		printf("\nSo luong ky so: %d",dem);
		printf("\nChuoi sau khi thay doi: %s",s);
	}
	else printf("\nChuoi khong co ky so");
}

void ChuanHoa(char s[100]) 
{
    int   j = 0;

    for (int i = 0; i < strlen(s); i++) 
	{
        if (s[i] != ' ' || (i > 0 && s[i - 1] != ' ')) 
		{
            s[j++] = s[i];
        }
    }

    if (j > 0 && s[j - 1] == ' ' || s[j-1] == '\n') 
	{
        j--;
    }

    s[j] = '\0'; 
}

void vietHoa(char s[100])
{
	ChuanHoa(s);
	for(int i = 0; i<strlen(s); i++)
	{
		if((s[i] >= 'a' && s[i] <='z') && s[i - 1] == ' ' || i == 0)
		{
			s[i] -= 32;
		}
		else if(s[i] >= 'A' && s[i] <='Z')
		{
			s[i] += 32;
		}
	}
	printf("\nChuoi sau khi chuan hoa va viet hoa: %s",s);
}

void in2TuCuoi(char s[100])
{
	int dem = 0;
	int vt;
	for(int i = strlen(s) - 1; i>0; i--)
	{
		if(s[i] == ' ')
		{
			dem++;
			if(dem == 2)
			{
				vt = i+1;
			}
		}
	}
	printf("\nHai tu chuoi cung trong chuoi: ");
	for(int i = vt; i<strlen(s); i++)
		printf("%c",s[i]);
}

int main()
{
	char s[100];
	//Cau a
	printf("Nhap chuoi: ");
	gets(s);
	printf("Noi dung chuoi: ");
	puts(s);
	printf("Do dai chuoi: %d", strlen(s));
	//Cau b
	demKySo(s);
	//Cau c
	vietHoa(s);
	//Cau d
	in2TuCuoi(s);
}
