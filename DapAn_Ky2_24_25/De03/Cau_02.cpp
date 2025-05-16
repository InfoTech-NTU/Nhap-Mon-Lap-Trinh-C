#include<stdio.h>
#include<string.h>

void demKyChu(char s[100])
{
	int dem = 0;
	for(int i = 0; i<strlen(s); i++)
	{
		if(!(s[i] >='0' && s[i] <= '9'))
			dem++;
	}
	printf("\nCac so cac ky chu trong chuoi la: %d",dem);
}

void inTu(char s[100])
{
	printf("\nIn moi tu tren 1 dong: \n");
	for(int i = 0; i<strlen(s); i++)
	{
		if(s[i] == ' ')
			printf("\n");
		else printf("%c",s[i]);
	}
}

void tuMax (char s[])
{
	char b[100], c[100];
	int j = 0;
	int maxlength = 0;
	for(int i = 0; i <= strlen(s); i++)
	{
        if(s[i] != ' ' && s[i] != '\0')
	    	b[j++] = s[i];
		else
		{
            b[j] = '\0';
            if(strlen(b) > maxlength)
			{
                strcpy(c, b);
                maxlength = strlen(b);            
			}
			j = 0;
        }
    }
    printf("\nTu dai nhat: %s co chieu dai la %d",c,maxlength);
}

void TimKiemChuoi(char s[]) 
{
	char b[100];
	printf("\nNhap vao chuoi moi: ");
	gets(b);
	int flag = 0;
    int len1 = strlen(s);
    int len2 = strlen(b);
    for (int i = 0; i <= len1 - len2; i++) 
    {
        int j;
        for (j = 0; j < len2; j++) 
        {
            if (s[i + j] != b[j]) 
            	break;
        }
        
        if (j == len2)
        {
        	printf("Chuoi '%s' xuat hien tai vi tri %d trong chuoi '%s'.\n", b, i, s);
        	flag = 1;
        	break;
		}
    }
    if(flag == 0) 
		printf("Chuoi '%s' khong xuat hien trong chuoi '%s'.\n", b,s);
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
	demKyChu(s);
	//Cau c
	inTu(s);
	//Cau d
	tuMax(s);
	//Cau e
	TimKiemChuoi(s);
}
