#include<stdio.h>
#include<string.h>

void InChuoi(char s[100])
{
	int n;
	do
	{
		printf("So nguyen duong: ");
		scanf("%d",&n);
	}
	while(!(n < strlen(s)));
	
	printf("%d ky tu dau tien: ",n);
	for(int i = 0; i<n; i++)
	{
		printf("%c",s[i]);
	}
	printf("\n");
}

void demKTNA(char s[100])
{
	int dem = 0;
	for(int i = 0; i < strlen(s); i++){
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] =='o' || s[i] == 'u')
		{
			dem++;
			s[i] -= 32;
		}
	}
	printf("So ky tu nguyen am va viet hoa tuong ung\n");
	printf("%d %s", dem, s);
	printf("\n");
}

void ChuanHoa(char s[]) 
{
    int j = 0;

    for (int i = 0; i < strlen(s); i++) 
	{
        if (s[i] != ' ' || (i > 0 && s[i - 1] != ' ')) 
		{
            s[j++] = s[i];
        }
    }

    if (j > 0 && s[j - 1] == ' ' || s[j-1] == '\n') {
        j--;
    }
    s[j] = '\0'; 
}

void Xoa2Tu(char s[100])
{
	ChuanHoa(s);
	int dem = 0; 
	int vt = 0;
	for(int i = strlen(s); i>0; i--)
	{
		if(s[i] == ' ')
		{
			dem++;
			if(dem == 2)
			{
				vt = i;
				break;
			}
		}	
	}
	
	s[vt] = '\0';
	printf("Chuoi sau khi xoa 2 tu cuoi: %s",s);
}

int main()
{
	char s[100];
	//Cau a
	printf("Nhap chuoi: ");
	gets(s);
	printf("Noi dung chuoi: ");
	puts(s);
	//Cau b
	InChuoi(s);
	//Cau c
	demKTNA(s);
	//Cau d
	Xoa2Tu(s);	
}
